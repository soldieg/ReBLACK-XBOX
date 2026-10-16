#!/usr/bin/env python3
"""Build the repository-owned BLACK Xbox progress snapshot and GitHub Pages site."""

from __future__ import annotations

import argparse
import hashlib
import json
import shutil
import sys
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
DEFAULT_REPORT = ROOT / "tools/decompdev/progress-source.json"
DEFAULT_BADGE = ROOT / "docs/assets/progress.svg"
DEFAULT_OUTPUT = ROOT / "build/pages"


def percent(value: object, field: str) -> float:
    try:
        result = float(value)
    except (TypeError, ValueError) as error:
        raise ValueError(f"{field} must be numeric") from error
    if result < 0 or result > 100:
        raise ValueError(f"{field} must be between 0 and 100")
    return result


def read_report(path: Path) -> dict:
    # Git may check this JSON out with CRLF on Windows; approvals hash the LF-normalized repository content.
    report_bytes = path.read_bytes().replace(b"\r\n", b"\n")
    report = json.loads(report_bytes.decode("utf-8"))
    measures = report.get("measures")
    units = report.get("units")
    if report.get("version") != 2 or not isinstance(measures, dict) or not isinstance(units, list):
        raise ValueError("Expected an objdiff v2 report with aggregate measures and units")

    approval_path = ROOT / "tools/decompdev/inventory-approval.json"
    approval = json.loads(approval_path.read_text(encoding="utf-8"))
    if approval.get("status") != "reviewed-incomplete" or approval.get("scope") != "split-candidate-snapshot":
        raise ValueError("The dashboard accepts only the reviewed incomplete split-candidate snapshot")
    if approval.get("report_sha256") != hashlib.sha256(report_bytes).hexdigest():
        raise ValueError("Report SHA-256 does not match the reviewed inventory approval")
    if approval.get("unit_count") != 13676 or approval.get("split_manifest_count") != 13676:
        raise ValueError("Approved split-manifest count is not the expected 13,676")
    if approval.get("expected_total_code_bytes") != 2297156 or approval.get("candidate_function_count") != 16598:
        raise ValueError("Approved candidate counts or code-byte denominator do not match the reviewed snapshot")
    if approval.get("xbe_sha256") != "DF2739C372D254A90AEECCF5971D12097F22D89FBB90DB021FDA96DD4DEB68F6":
        raise ValueError("The report approval references a different XBE identity")

    def reject_paths(value: object, location: str = "report") -> None:
        if isinstance(value, dict):
            for key, child in value.items():
                if "path" in str(key).lower():
                    raise ValueError(f"{location}.{key} exposes a local path")
                reject_paths(child, f"{location}.{key}")
        elif isinstance(value, list):
            for index, child in enumerate(value):
                reject_paths(child, f"{location}[{index}]")
        elif isinstance(value, str) and (
            value.startswith("/") or value.startswith(chr(92)) or (len(value) > 1 and value[1] == ":")
        ):
            raise ValueError(f"{location} contains an absolute path")

    reject_paths(report)

    candidate_count = int(measures["total_units"])
    total_code = int(measures["total_code"])
    exact_bytes = int(measures.get("matched_code", 0))
    exact_functions = int(measures.get("matched_functions", 0))
    if candidate_count <= 0 or total_code <= 0 or len(units) != candidate_count:
        raise ValueError("Report unit count or byte denominator is invalid")
    if candidate_count != approval["unit_count"] or total_code != approval["expected_total_code_bytes"]:
        raise ValueError("Report aggregates do not match the approved candidate count and code-byte denominator")
    if int(measures.get("total_functions", 0)) != approval["unit_count"]:
        raise ValueError("Report function count does not match the approved split-candidate inventory")

    totals = {"exact": 0, "fuzzy": 0, "unmatched": 0}
    exact_candidate_bytes = 0
    names: set[str] = set()
    candidates: list[dict] = []
    byte_sum = 0
    for index, unit in enumerate(units):
        if not isinstance(unit, dict) or not isinstance(unit.get("name"), str):
            raise ValueError(f"units[{index}] has no valid name")
        name = unit["name"]
        if not name.startswith("candidate/") or name in names:
            raise ValueError(f"units[{index}] is not a unique candidate unit")
        names.add(name)
        unit_measures = unit.get("measures")
        if not isinstance(unit_measures, dict):
            raise ValueError(f"{name} has no measures")
        if unit.get("metadata", {}).get("complete") is not False:
            raise ValueError(f"{name} is not explicitly marked as an incomplete candidate")
        if not isinstance(unit.get("functions"), list) or len(unit["functions"]) != 1:
            raise ValueError(f"{name} must contain exactly one split candidate function")
        size = int(unit_measures["total_code"])
        if size <= 0:
            raise ValueError(f"{name} must have a positive code size")
        byte_sum += size

        matched_bytes = int(unit_measures.get("matched_code", 0))
        exact_percent = percent(unit_measures.get("matched_code_percent", 0), f"{name}.matched_code_percent")
        fuzzy_percent = percent(unit_measures.get("fuzzy_match_percent", 0), f"{name}.fuzzy_match_percent")
        is_exact = exact_percent == 100.0 and matched_bytes == size
        if is_exact:
            category = "exact"
            exact_candidate_bytes += size
        elif fuzzy_percent > 0:
            category = "fuzzy"
        else:
            category = "unmatched"
        totals[category] += 1
        candidates.append({
            "name": name.removeprefix("candidate/"),
            "bytes": size,
            "category": category,
            "exactPercent": exact_percent,
            "fuzzyPercent": fuzzy_percent,
        })

    if byte_sum != total_code:
        raise ValueError(f"Candidate sizes sum to {byte_sum}, not the report total {total_code}")
    if totals["exact"] != exact_functions or exact_candidate_bytes != exact_bytes:
        raise ValueError("Candidate exact classifications do not reconcile with report aggregates")
    if exact_bytes != int(round(total_code * percent(measures["matched_code_percent"], "matched_code_percent") / 100)):
        raise ValueError("Exact byte count does not reconcile with the report percentage")

    summary = {
        "scope": "Incomplete XboxRecomp split-candidate snapshot; not a complete linked-unit inventory.",
        "candidateCount": candidate_count,
        "totalCodeBytes": total_code,
        "exactCodeBytes": exact_bytes,
        "exactCodePercent": percent(measures["matched_code_percent"], "matched_code_percent"),
        "fuzzyMatchPercent": percent(measures["fuzzy_match_percent"], "fuzzy_match_percent"),
        "exactFunctions": exact_functions,
        "categories": totals,
    }
    return {"summary": summary, "candidates": candidates}


def badge_svg(summary: dict) -> str:
    exact = f"{summary['exactCodePercent']:.2f}%"
    left = "BLACK exact code"
    left_width = 110
    right_width = max(47, len(exact) * 7 + 14)
    width = left_width + right_width
    return (
        f'<svg xmlns="http://www.w3.org/2000/svg" width="{width}" height="20" role="img" '
        f'aria-label="{left}: {exact}">'
        '<linearGradient id="g" x2="0" y2="100%"><stop offset="0" stop-color="#bbb" stop-opacity=".1"/>'
        '<stop offset="1" stop-opacity=".1"/></linearGradient>'
        '<clipPath id="r"><rect width="100%" height="20" rx="3"/></clipPath>'
        '<g clip-path="url(#r)"><path fill="#555" d="M0 0h110v20H0z"/>'
        f'<path fill="#1671c5" d="M110 0h{right_width}v20H110z"/>'
        '<rect width="100%" height="20" fill="url(#g)"/></g>'
        f'<g fill="#fff" text-anchor="middle" font-family="Verdana,DejaVu Sans,sans-serif" font-size="11">'
        f'<text x="55" y="14">{left}</text><text x="{left_width + right_width / 2:.1f}" y="14">{exact}</text></g>'
        '</svg>\n'
    )


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--report", type=Path, default=DEFAULT_REPORT, help="validated objdiff report JSON")
    parser.add_argument("--output-dir", type=Path, default=DEFAULT_OUTPUT, help="static site build directory")
    parser.add_argument("--badge", type=Path, default=DEFAULT_BADGE, help="README badge SVG path")
    parser.add_argument("--check-badge", action="store_true", help="fail if the committed badge is stale; do not change it")
    args = parser.parse_args()

    try:
        payload = read_report(args.report)
        expected_badge = badge_svg(payload["summary"])
        if args.check_badge:
            if not args.badge.is_file() or args.badge.read_text(encoding="utf-8") != expected_badge:
                raise ValueError("README progress badge is stale; run this script without --check-badge")
        else:
            args.badge.parent.mkdir(parents=True, exist_ok=True)
            args.badge.write_text(expected_badge, encoding="utf-8", newline="\n")

        args.output_dir.mkdir(parents=True, exist_ok=True)
        (args.output_dir / "data").mkdir(parents=True, exist_ok=True)
        shutil.copy2(ROOT / "docs/index.html", args.output_dir / "index.html")
        (args.output_dir / "data/progress.json").write_text(
            json.dumps(payload, ensure_ascii=False, separators=(",", ":")) + "\n", encoding="utf-8"
        )
        summary = payload["summary"]
        print(
            f"Built {summary['candidateCount']:,} candidates / {summary['totalCodeBytes']:,} bytes; "
            f"exact {summary['exactFunctions']} functions ({summary['exactCodePercent']:.8f}%); "
            f"fuzzy {summary['fuzzyMatchPercent']:.8f}%."
        )
        print(f"Pages files: {args.output_dir}")
    except (OSError, KeyError, TypeError, ValueError, json.JSONDecodeError) as error:
        print(f"Dashboard generation failed: {error}", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
