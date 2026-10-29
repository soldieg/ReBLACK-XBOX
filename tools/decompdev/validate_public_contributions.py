#!/usr/bin/env python3
"""Check public reconstruction submissions for completeness and obvious private-data leaks."""

from __future__ import annotations

import argparse
import json
import re
import subprocess
import sys
from pathlib import Path, PurePosixPath


ROOT = Path(__file__).resolve().parents[2]
REPORT = ROOT / "tools/decompdev/progress-source.json"
BLOCKED_SUFFIXES = {
    ".xbe", ".xex", ".iso", ".xiso", ".rom", ".pak", ".bin", ".elf", ".exe", ".dll",
    ".obj", ".o", ".a", ".lib", ".so", ".dylib", ".pdb", ".ilk", ".pch", ".res",
    ".zip", ".7z", ".rar", ".dds", ".png", ".jpg", ".jpeg", ".bmp", ".tga", ".xbx",
    ".xpr", ".dat", ".wav", ".xmv", ".mp4",
}
LOCAL_PATH = re.compile(
    r"(?i)(?:\b[A-Z]:\\(?:users|reblack|recomp)\\|"
    + "|".join(f"/{part}/" for part in ("home", "mnt", "Users"))
    + r")"
)
TOKEN = re.compile(r"(?i)\b(?:gh[pousr]_[A-Za-z0-9_]{20,}|github_pat_[A-Za-z0-9_]{20,}|AKIA[0-9A-Z]{16})\b")
BYTE_DUMP = re.compile(r"(?i)(?:\b[0-9a-f]{2}\s+){15,}[0-9a-f]{2}\b")
FUNCTION_ID = re.compile(r"^sub_[0-9a-fA-F]{8}$")
MAX_TEXT_BYTES = 1024 * 1024
MAX_EXACTIFICATION_DATA_BYTES = 2 * 1024 * 1024


def inspect_public_file(path: Path, root: Path) -> list[str]:
    relative = path.relative_to(root).as_posix()
    errors: list[str] = []
    if path.is_symlink():
        return [f"{relative}: symbolic links are not allowed in public contributions"]
    if path.suffix.lower() in BLOCKED_SUFFIXES:
        errors.append(f"{relative}: game or generated binary files are not allowed")
        return errors
    try:
        content = path.read_bytes()
    except OSError as error:
        return [f"{relative}: cannot read changed file ({error})"]
    limit = MAX_EXACTIFICATION_DATA_BYTES if relative == "docs/data/exactification-functions.json" else MAX_TEXT_BYTES
    if len(content) > limit:
        errors.append(f"{relative}: text contribution exceeds {limit // (1024 * 1024)} MiB")
    if b"\x00" in content:
        errors.append(f"{relative}: binary content is not allowed")
        return errors
    try:
        text = content.decode("utf-8")
    except UnicodeDecodeError:
        errors.append(f"{relative}: changed contribution must be UTF-8 text")
        return errors
    if LOCAL_PATH.search(text):
        errors.append(f"{relative}: contains an absolute local path")
    if TOKEN.search(text):
        errors.append(f"{relative}: possible credential detected")
    if path.suffix.lower() in {".md", ".json", ".txt"} and BYTE_DUMP.search(text):
        errors.append(f"{relative}: looks like a raw target-byte dump")
    return errors


def candidate_ids(report_path: Path = REPORT) -> set[str]:
    report = json.loads(report_path.read_text(encoding="utf-8"))
    return {
        str(unit.get("name", "")).removeprefix("candidate/")
        for unit in report.get("units", [])
        if isinstance(unit, dict)
    }


def validate_function_pairs(changed_paths: list[str], root: Path, known: set[str]) -> list[str]:
    errors: list[str] = []
    source_paths = [PurePosixPath(name) for name in changed_paths if name.startswith("reconstructions/functions/") and name.endswith(".c")]
    evidence_paths = {PurePosixPath(name).name for name in changed_paths if name.startswith("reconstructions/evidence/") and name.endswith(".md")}
    for source in source_paths:
        candidate_id = source.stem
        if not FUNCTION_ID.fullmatch(candidate_id) and candidate_id != "xbe_entry_point":
            errors.append(f"{source.as_posix()}: filename must be sub_ followed by eight hexadecimal digits")
            continue
        if candidate_id not in known:
            errors.append(f"{source.as_posix()}: candidate is not present in the approved public snapshot")
        if f"{candidate_id}.md" not in evidence_paths:
            evidence_file = root / "reconstructions" / "evidence" / f"{candidate_id}.md"
            if not evidence_file.is_file():
                errors.append(f"{source.as_posix()}: matching reconstructions/evidence/{candidate_id}.md is required")
    for name in changed_paths:
        if name.startswith("reconstructions/") and name != "reconstructions/README.md":
            valid = (
                name.startswith("reconstructions/functions/") and name.endswith(".c")
            ) or (
                name.startswith("reconstructions/evidence/") and name.endswith(".md")
            ) or name == "reconstructions/validation-index.json"
            if not valid:
                errors.append(f"{name}: use one C file and one Markdown evidence file per function")
    return errors


def validate_validation_index_permission(changed_paths: list[str], maintainer_authorized: bool) -> list[str]:
    """Only repository maintainers may change the dashboard's accepted-validation ledger."""
    if "reconstructions/validation-index.json" in changed_paths and not maintainer_authorized:
        return [
            "reconstructions/validation-index.json: only a repository maintainer may record an accepted build/diff result"
        ]
    return []


def changed_files(base: str, root: Path) -> list[str]:
    result = subprocess.run(
        ["git", "diff", "--name-only", "--diff-filter=ACMR", f"{base}...HEAD"],
        cwd=root,
        check=True,
        capture_output=True,
        text=True,
    )
    return [line.strip() for line in result.stdout.splitlines() if line.strip()]


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--base", required=True, help="base commit SHA or ref for the pull request")
    parser.add_argument("--root", type=Path, default=ROOT)
    parser.add_argument(
        "--maintainer-authorized",
        action="store_true",
        help="the pull request author is an owner, member, or collaborator of this repository",
    )
    args = parser.parse_args()
    root = args.root.resolve()
    try:
        changed = changed_files(args.base, root)
        errors = [
            issue
            for name in changed
            for issue in inspect_public_file(root / name, root)
        ]
        touched_reconstructions = any(name.startswith("reconstructions/") for name in changed)
        if touched_reconstructions:
            errors.extend(validate_function_pairs(changed, root, candidate_ids()))
            errors.extend(validate_validation_index_permission(changed, args.maintainer_authorized))
        if errors:
            print("Public contribution preflight: FAIL")
            for error in errors:
                print(f"- {error}")
            return 1
        print(f"Public contribution preflight: PASS ({len(changed)} changed files checked)")
        print("This check covers submission format and obvious data leaks; it does not claim Xbox build/diff validation.")
        return 0
    except (OSError, ValueError, subprocess.CalledProcessError, json.JSONDecodeError) as error:
        print(f"Public contribution preflight: ERROR ({error})", file=sys.stderr)
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
