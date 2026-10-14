# decomp.dev integration status

**Status:** the `ReBLACK Xbox decomp.dev report` workflow is published on `main`, but there has been no workflow run and no `BLACK_report` artifact. Its validation gate is intentionally closed until a reviewed complete linked-unit inventory and sanitized objdiff v2 report are committed.

The decomp.wiki guide requires target objects representing the matched binary, source-built base objects (or null when no source exists), and an objdiff.json inventory covering every linked object. GitHub Actions must generate report.json and upload it as <VERSION>_report on the default branch before the project can be added to decomp.dev.

## Local pilot

One XboxRecomp-generated target object and one MSVC-built reconstruction object were compared with objdiff-cli v3.8.2. The report gives 3.79% fuzzy match for one 85-byte candidate. Its boundary has only 0.50 heuristic confidence, and the reconstruction normalizes the original calling convention. This validates the local tooling path only; the pilot is not a project progress measure and remains local.

## Inventory audit

The split manifest has 13,676 entries. The 16,702-entry function-ID list contains all 13,676 manifest starts plus 3,026 additional vtable_thunk candidates; XboxRecomp records those extras with an estimated 32-byte size.

Re-running XboxRecomp's detector with those addresses as seeds produced 16,598 candidate entries: all 13,676 split starts, 2,563 of the additional vtable starts, and 359 entries absent from both prior lists. The remaining 463 vtable candidates were not retained. The refined ranges still contain 1,517 overlapping pairs, mostly from aliases. This is a better candidate inventory, but not proof of the original linker-object inventory or a complete function denominator.

The union of those ranges covers 2,227,947 of 2,577,820 bytes (86.428%) across executable-flagged raw sections. This byte coverage is not a completeness metric: some sections can contain embedded data, and uncovered ranges may be data, padding, or missed code. The .text section alone has 94.362% range coverage; other sections vary substantially.

## Why the decomp.dev report is still gated

The local audit currently has three different function inventories: 13,676 XboxRecomp split entries, 16,702 function-ID candidates, and 16,598 refined detector candidates. The refined candidates include 1,517 overlapping range pairs; 463 additional vtable candidates were not retained; and 349,873 bytes in executable-flagged sections remain uncovered. REA/Ghidra's PE-derived view found 7,389 procedures, which corroborates many starts but does not recover the original linker-object boundaries. No original linker map, symbol file, library, or object-grouping record was found in the inspected project tree.

These counts describe detected functions and byte ranges, not every object linked into the XBE. The only generated comparison remains the local one-function pilot: 85 bytes and 3.79% fuzzy match. Its source-to-object provenance is not verified, so it is not a project progress measure. Publishing it as `BLACK_report` would make a pilot subset look like whole-game progress.

The public repository is a status/planning hub and contains no project source, complete `objdiff.json`, buildable target/base inputs, or reviewed complete linked-unit inventory. A workflow file alone does not produce an ingestible report. The current workflow correctly requires `inventory-approval.json` with `status=reviewed-complete` and `scope=all-linked-units`, plus `progress-source.json`, before uploading the `BLACK_report` artifact.

Keep the XBE, extracted code, and object files local. To finish the inventory gate, recover the original build's linker map/symbol information or an equivalent authoritative list that maps every linked unit to its target range. Then establish source-built base objects and target-object provenance, reconcile overlaps and gaps, create the sanitized report input, and run the workflow. XboxRecomp is the parser used for this XBE; REA rejected the original XBE format and its analysis of a derived PE view is corroborative only. The optional decomp.dev GitHub App sends workflow notifications and may comment on PRs; it does not generate reports. Project registration remains postponed.
