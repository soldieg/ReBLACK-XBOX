#!/usr/bin/env python3
"""Build the repository-owned BLACK Xbox progress snapshot and GitHub Pages site."""

from __future__ import annotations

import argparse
import hashlib
import json
import re
import shutil
import sys
from datetime import date
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
DEFAULT_REPORT = ROOT / "tools/decompdev/progress-source.json"
DEFAULT_PRIORITIES = ROOT / "docs/data/function-priorities.json"
DEFAULT_VALIDATIONS = ROOT / "reconstructions/validation-index.json"
DEFAULT_EXACTIFICATION_FUNCTIONS = ROOT / "docs/data/exactification-functions.json"
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


def address_region(candidate_id: str) -> str | None:
    """Return the 64 KiB code-address bucket encoded in a split candidate ID."""
    match = re.fullmatch(r"sub_([0-9a-fA-F]{8})", candidate_id)
    if not match:
        return None
    return f"0x{int(match.group(1), 16) & 0xFFFF0000:08X}"


def read_validation_index(path: Path, candidates: list[dict]) -> dict:
    """Load maintainer-reviewed build/diff records, separate from objdiff matches."""
    index = json.loads(path.read_text(encoding="utf-8"))
    records = index.get("functions")
    if index.get("schemaVersion") != 1 or not isinstance(records, list):
        raise ValueError("Validation index must use schemaVersion 1 and a functions list")
    known = {item["name"]: item for item in candidates}
    ids: set[str] = set()
    validated: list[str] = []
    allowed_build = {"pending", "pass", "fail"}
    allowed_review = {"pending", "accepted", "declined"}
    for entry in records:
        if not isinstance(entry, dict):
            raise ValueError("Validation records must be objects")
        candidate_id = entry.get("id")
        build_diff = entry.get("buildDiff")
        review = entry.get("maintainerReview")
        evidence = entry.get("evidence", "")
        if not isinstance(candidate_id, str) or candidate_id not in known:
            raise ValueError("Validation index references a candidate absent from the approved snapshot")
        if candidate_id in ids:
            raise ValueError("Validation index contains duplicate candidate IDs")
        if build_diff not in allowed_build or review not in allowed_review:
            raise ValueError(f"{candidate_id} has an invalid buildDiff or maintainerReview state")
        if not isinstance(evidence, str) or (evidence and not evidence.startswith("https://")):
            raise ValueError(f"{candidate_id} evidence must be an HTTPS link or empty")
        if build_diff == "pass" and review == "accepted" and not evidence:
            raise ValueError(f"{candidate_id} needs public evidence before it can be counted as validated")
        ids.add(candidate_id)
        if build_diff == "pass" and review == "accepted":
            validated.append(candidate_id)
    validated.sort()
    return {
        "validatedIds": validated,
        "validatedCount": len(validated),
        "validatedPercent": (100.0 * len(validated) / len(candidates)) if candidates else 0.0,
    }


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
            "addressRegion": address_region(name.removeprefix("candidate/")),
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


def read_priorities(path: Path, candidates: list[dict]) -> dict:
    priorities = json.loads(path.read_text(encoding="utf-8"))
    high = priorities.get("high")
    if priorities.get("schemaVersion") != 1 or not isinstance(high, list):
        raise ValueError("Priority data must use schemaVersion 1 and a high candidate list")
    known = {item["name"] for item in candidates}
    if any(not isinstance(name, str) or name not in known for name in high):
        raise ValueError("Priority list contains a candidate ID absent from the approved dashboard snapshot")
    if len(high) != len(set(high)):
        raise ValueError("Priority list contains duplicate candidate IDs")
    return {"high": high}


def read_exactification_functions(path: Path, candidates: list[dict]) -> dict:
    """Load sanitized per-function exactification statuses and reconcile them to the map."""
    data = json.loads(path.read_text(encoding="utf-8"))
    if data.get("schemaVersion") != 1:
        raise ValueError("Exactification functions must use schemaVersion 1")
    try:
        date.fromisoformat(data["snapshotDate"])
    except (KeyError, TypeError, ValueError) as error:
        raise ValueError("Exactification functions snapshotDate must be YYYY-MM-DD") from error
    rows = data.get("functions")
    if not isinstance(rows, list) or not rows:
        raise ValueError("Exactification functions must contain a nonempty function list")

    candidate_by_name = {item["name"].lower(): item for item in candidates}
    records: dict[str, dict] = {}
    counts = {"current-exact": 0, "pending-revalidation": 0}
    for index, item in enumerate(rows):
        if not isinstance(item, dict) or set(item) != {"function", "address", "sizeBytes", "status"}:
            raise ValueError(f"Exactification function {index} has unapproved or missing fields")
        name, address, size, status = item["function"], item["address"], item["sizeBytes"], item["status"]
        match = re.fullmatch(r"sub_([0-9a-fA-F]{8})", name) if isinstance(name, str) else None
        if not match or not isinstance(address, str) or address.lower() != f"0x{match.group(1).lower()}":
            raise ValueError(f"Exactification function {index} has an invalid ID/address pair")
        key = name.lower()
        if key in records:
            raise ValueError(f"Exactification functions contain duplicate ID {name}")
        if type(size) is not int or size <= 0:
            raise ValueError(f"Exactification function {name} must have a positive integer sizeBytes")
        if not isinstance(status, str) or status not in counts:
            raise ValueError(f"Exactification function {name} has an unsupported status")
        candidate = candidate_by_name.get(key)
        if candidate is None:
            raise ValueError(f"Exactification function {name} is absent from the candidate map")
        if candidate["bytes"] != size:
            raise ValueError(f"Exactification function {name} size does not match the candidate map")
        safe = {"function": name, "address": address, "sizeBytes": size, "status": status}
        records[key] = safe
        counts[status] += 1

    for candidate in candidates:
        record = records.get(candidate["name"].lower())
        if record:
            candidate["exactificationStatus"] = record["status"]

    return {
        "currentExactPasses": counts["current-exact"],
        "pendingRevalidation": counts["pending-revalidation"],
        "totalFunctions": len(records),
        "snapshotDate": data["snapshotDate"],
        "functions": list(records.values()),
    }


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
    parser.add_argument("--priorities", type=Path, default=DEFAULT_PRIORITIES, help="maintainer-curated public candidate priorities")
    parser.add_argument("--validations", type=Path, default=DEFAULT_VALIDATIONS, help="maintainer-reviewed function build/diff index")
    parser.add_argument("--exactification-functions", type=Path, default=DEFAULT_EXACTIFICATION_FUNCTIONS, help="sanitized per-function exactification statuses")
    parser.add_argument("--output-dir", type=Path, default=DEFAULT_OUTPUT, help="static site build directory")
    parser.add_argument("--badge", type=Path, default=DEFAULT_BADGE, help="README badge SVG path")
    parser.add_argument("--check-badge", action="store_true", help="fail if the committed badge is stale; do not change it")
    args = parser.parse_args()

    try:
        payload = read_report(args.report)
        payload["priorities"] = read_priorities(args.priorities, payload["candidates"])
        payload["validation"] = read_validation_index(args.validations, payload["candidates"])
        payload["exactification"] = read_exactification_functions(args.exactification_functions, payload["candidates"])
        validated_ids = set(payload["validation"]["validatedIds"])
        for candidate in payload["candidates"]:
            candidate["reconstructionValidated"] = candidate["name"] in validated_ids
        payload["summary"]["validatedReconstructionCount"] = payload["validation"]["validatedCount"]
        payload["summary"]["validatedReconstructionPercent"] = payload["validation"]["validatedPercent"]
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
            f"fuzzy {summary['fuzzyMatchPercent']:.8f}%; "
            f"exactification {payload['exactification']['currentExactPasses']}/"
            f"{payload['exactification']['totalFunctions']} current exact passes."
        )
        print(f"Pages files: {args.output_dir}")
    except (OSError, KeyError, TypeError, ValueError, json.JSONDecodeError) as error:
        print(f"Dashboard generation failed: {error}", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
