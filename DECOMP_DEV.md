# decomp.dev integration status

**Status:** local objdiff pilot completed; project not registered; no progress-report workflow is configured.

The decomp.wiki integration guide requires target objects representing the matched binary, base objects built from project sources (or null when no source exists), and an `objdiff.json` inventory containing every object linked into the binary. GitHub Actions must generate `report.json` and upload it as `<VERSION>_report` from the default branch before the project can be added at decomp.dev.

A local pilot now compares one XboxRecomp-generated target object with an MSVC-built reconstruction object using objdiff-cli v3.8.2. The report gives 3.79% fuzzy match for one 85-byte candidate. Its boundary has only 0.50 heuristic confidence, and the C reconstruction normalizes the original calling convention. This confirms the toolchain can produce a report, but the percentage is not a valid project-wide decompilation metric. The pilot artifacts remain local under `decompilacao/compilacao/decompdev-pilot/`.

The two current inventories disagree: the XboxRecomp split manifest has 13,676 entries and the function-ID summary has 16,702. Reconcile the complete linked-unit inventory, verify target boundaries and source-derived base objects, then audit the report categories before enabling the default-branch workflow. Until that denominator is trustworthy, do not publish a progress artifact or register the project.

The XBE parser used for local metadata is XboxRecomp; REA rejected this XBE format and supplied no independent analysis. The optional decomp.dev GitHub App sends workflow notifications and can comment on PRs; it does not generate progress reports by itself.
