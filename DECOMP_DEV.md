# decomp.dev integration status

**Status:** local objdiff pilot completed; project not registered; report workflow not added yet because the complete unit inventory and reproducible source inputs are not present in this public repository.

The decomp.wiki integration guide requires target objects representing the matched binary, base objects built from project sources (or null when no source exists), and an `objdiff.json` inventory containing every object linked into the binary. GitHub Actions must generate `report.json` and upload it as `<VERSION>_report` from the default branch before the project can be added at decomp.dev.

A local pilot compares one XboxRecomp-generated target object with an MSVC-built reconstruction object using objdiff-cli v3.8.2. The report gives 3.79% fuzzy match for one 85-byte candidate. Its boundary has only 0.50 heuristic confidence, and the C reconstruction normalizes the original calling convention. This confirms the toolchain can produce a report, but the percentage is not a valid project-wide decompilation metric. The pilot artifacts remain local under `decompilacao/compilacao/decompdev-pilot/`.

The inventory comparison is now more specific: all 13,676 split-manifest start addresses occur in the 16,702-entry function-ID list. The other 3,026 entries are all classified as `game_vtable` / `vtable_thunk` candidates. Of those, 2,534 ranges are fully inside a split range, 449 partially overlap one, and 43 do not overlap any split range. These may include aliases and uncertain boundaries; neither counting all nor dropping all 3,026 establishes a safe denominator. The local reconciliation record is `decompilacao/proveniencia/decompdev-pilot/inventory-reconciliation.json`.

The public repository currently contains status/planning documents only; it has no project source, `objdiff.json`, target/base objects, or complete reviewed unit inventory. A workflow file alone would not produce an ingestible report. Add the workflow after the unit inventory and report inputs can be generated reproducibly without publishing the XBE, extracted game code, or object files. Until then, do not publish a progress artifact or register the project.

The XBE parser used for local metadata is XboxRecomp; REA rejected this XBE format and supplied no independent analysis. The optional decomp.dev GitHub App sends workflow notifications and can comment on PRs; it does not generate progress reports by itself.
