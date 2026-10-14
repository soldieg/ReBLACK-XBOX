# decomp.dev integration status

**Status:** The project is registered at [decomp.dev](https://decomp.dev/soldieg/ReBLACK-XBOX). GitHub Actions publishes the sanitized, explicitly incomplete `BLACK_report` pilot artifact. It contains one 85-byte candidate and is not a whole-game progress report.

The decomp.wiki guide describes reports built from target objects, source-built base objects (or null when no source exists), and an objdiff.json inventory covering every linked object. GitHub Actions generates report.json and uploads it as <VERSION>_report on the default branch. The current registered project uses an explicitly incomplete one-function pilot while the full inventory is prepared.

## Pilot report artifact

- Workflow run: [38614648807](https://github.com/soldieg/ReBLACK-XBOX/actions/runs/38614648807) — success, commit `7949cfa`.
- Artifact: `BLACK_report`, containing only `report.json` (objdiff Report v2); SHA-256 `814fea9a81d06115baadaa7c1728973bf4809488ac390d35bf275ed0c2d85b25`.
- Scope: one unit, `pilot/sub_0003F180`; one function; 85 code bytes; 3.7906976% fuzzy match; `metadata.complete=false`.
- The workflow summary labels it **INCOMPLETE PILOT**. Do not interpret the percentage as project-wide progress.
- The report was generated locally by `objdiff-cli v3.8.2` from the local target/base objects. GitHub Actions validates the sanitized objdiff v2 JSON, writes `build/report.json`, and uploads it; it does not rebuild the XBE or regenerate target/base objects on the runner.

## Local pilot

One XboxRecomp-generated target object and one MSVC-built reconstruction object were compared with objdiff-cli v3.8.2. The report gives 3.79% fuzzy match for one 85-byte candidate. Its boundary has only 0.50 heuristic confidence, and the reconstruction normalizes the original calling convention. This validates the local tooling path only; the pilot is not a project progress measure and remains local.

## Inventory audit

The split manifest has 13,676 entries. The 16,702-entry function-ID list contains all 13,676 manifest starts plus 3,026 additional vtable_thunk candidates; XboxRecomp records those extras with an estimated 32-byte size.

Re-running XboxRecomp's detector with those addresses as seeds produced 16,598 candidate entries: all 13,676 split starts, 2,563 of the additional vtable starts, and 359 entries absent from both prior lists. The remaining 463 vtable candidates were not retained. The refined ranges still contain 1,517 overlapping pairs, mostly from aliases. This is a better candidate inventory, but not proof of the original linker-object inventory or a complete function denominator.

The union of those ranges covers 2,227,947 of 2,577,820 bytes (86.428%) across executable-flagged raw sections. This byte coverage is not a completeness metric: some sections can contain embedded data, and uncovered ranges may be data, padding, or missed code. The .text section alone has 94.362% range coverage; other sections vary substantially.

## Why the full project report is still gated

The local audit currently has three different function inventories: 13,676 XboxRecomp split entries, 16,702 function-ID candidates, and 16,598 refined detector candidates. The refined candidates include 1,517 overlapping range pairs; 463 additional vtable candidates were not retained; and 349,873 bytes in executable-flagged sections remain uncovered. REA/Ghidra's PE-derived view found 7,389 procedures, which corroborates many starts but does not recover the original linker-object boundaries. No original linker map, symbol file, library, or object-grouping record was found in the inspected project tree.

These counts describe detected functions and byte ranges, not every object linked into the XBE. The published pilot compares one reconstructed 85-byte function and reports 3.7906976% fuzzy match. Its heuristic boundary and normalized calling convention make it unsuitable as a whole-game progress measure; the workflow marks the unit incomplete and its run summary states the limited scope.

The public repository is a status/planning hub and contains no project source, complete `objdiff.json`, buildable target/base inputs, or reviewed complete linked-unit inventory. The workflow accepts either this declared single-object pilot scope or a future reviewed-complete scope. A pilot artifact exists now, but it does not satisfy the inventory gate for full project reporting. The decomp.wiki steps for building all target objects, building source base objects, and listing every linked unit remain incomplete; only the one-unit pilot report and artifact-publication step are established.

Keep the XBE, extracted code, and object files local. To replace the pilot with a full report, recover the original build's linker map/symbol information or an equivalent authoritative list that maps every linked unit to its target range. Then establish source-built base objects and target-object provenance, reconcile overlaps and gaps, create the sanitized complete report input, and run the workflow. XboxRecomp is the parser used for this XBE; REA rejected the original XBE format and its analysis of a derived PE view is corroborative only. The optional decomp.dev GitHub App sends workflow notifications and may comment on PRs; it does not generate reports. The project is registered; the full linked-unit inventory and project-wide object mapping remain future work.
