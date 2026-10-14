# decomp.dev integration status

**Status:** no report workflow yet. The local pilot proves objdiff can produce a report, but the complete unit denominator, object grouping, and report scope are not certified.

The decomp.wiki guide requires target objects representing the matched binary, source-built base objects (or null when no source exists), and an objdiff.json inventory covering every linked object. GitHub Actions must generate report.json and upload it as <VERSION>_report on the default branch before the project can be added to decomp.dev.

## Local pilot

One XboxRecomp-generated target object and one MSVC-built reconstruction object were compared with objdiff-cli v3.8.2. The report gives 3.79% fuzzy match for one 85-byte candidate. Its boundary has only 0.50 heuristic confidence, and the reconstruction normalizes the original calling convention. This validates the local tooling path only; the pilot is not a project progress measure and remains local.

## Inventory audit

The split manifest has 13,676 entries. The 16,702-entry function-ID list contains all 13,676 manifest starts plus 3,026 additional vtable_thunk candidates; XboxRecomp records those extras with an estimated 32-byte size.

Re-running XboxRecomp's detector with those addresses as seeds produced 16,598 candidate entries: all 13,676 split starts, 2,563 of the additional vtable starts, and 359 entries absent from both prior lists. The remaining 463 vtable candidates were not retained. The refined ranges still contain 1,517 overlapping pairs, mostly from aliases. This is a better candidate inventory, but not proof of the original linker-object inventory or a complete function denominator.

The union of those ranges covers 2,227,947 of 2,577,820 bytes (86.428%) across executable-flagged raw sections. This byte coverage is not a completeness metric: some sections can contain embedded data, and uncovered ranges may be data, padding, or missed code. The .text section alone has 94.362% range coverage; other sections vary substantially.

## Why the workflow is still gated

The public repository is a status/planning hub and contains no project source, objdiff.json, buildable target/base inputs, or reviewed complete inventory. The selected scope follows the decomp.wiki requirement to include every linked object; the local detector has not established that inventory. A workflow file alone would not produce an ingestible report, and a one-function artifact would present an incomplete percentage as project progress.

Keep the XBE, extracted code, and object files local. Add the workflow after the unit inventory and reproducible sanitized report input are reviewed. XboxRecomp is the parser used for this XBE; REA rejected the XBE format and supplied no independent analysis. The optional decomp.dev GitHub App sends workflow notifications and may comment on PRs; it does not generate reports.