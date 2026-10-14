# decomp.dev Reporting for ReBLACK-XBOX

**Status:** design proposal for review  
**Request:** RP-00046-26  
**Target repository:** `soldieg/ReBLACK-XBOX`

## Goal

Make the Xbox project eligible for decomp.dev progress reporting while keeping every published measure tied to reproducible, byte-level evidence. The integration must not treat function counts, generated lifts, harnesses, or runtime observations as matching progress.

## Current facts

- The public repository is a status and planning hub; it does not contain the local game image, XBE, extracted assets, generated lifts, or reconstructed game code.
- The local workspace records 13,676 split assembly functions, two generated-lift snapshots, 82 manually reconstructed C files, 12 isolated harnesses, and 10 standalone object files.
- Those inventories do not establish byte-matching coverage or a complete denominator.
- No project-specific decomp.dev report generator or Actions workflow exists.
- decomp.dev ingests supported objdiff reports published as GitHub Actions artifacts. A workflow file by itself does not create progress.

## Proposed design

### Phase 1: Feasibility pilot

Use REA for evidence and identity checks where supported, and XboxRecomp for XBE-aware parsing and function boundaries. Select one manually reconstructed function with a complete provenance chain and investigate whether the original target can be represented as a relocatable object that objdiff can compare.

The pilot must record the source XBE identity and hash locally, the target function range, the reconstructed source and its build inputs, object hashes, tool versions, comparison command, and limitations. Do not upload the XBE, game assets, extracted executable bytes, or object files to the public repository or Actions artifacts.

**Pass condition:** an independently repeatable objdiff comparison accepts a genuine target/base object pair and produces a valid report entry whose meaning matches the project's evidence.

**Fail condition:** the target object cannot be recovered or represented safely, the comparison is not supported, or the input distribution would require publishing protected game material. On failure, stop decomp.dev implementation and keep progress in the repository's status documents without a fabricated dashboard percentage.

### Phase 2: Report generator

Only after the pilot passes, define a deterministic generator from reviewed, committed metadata and the validated object inputs. Use objdiff's supported report format and explicitly classify units with no verified base as unmatched. Require a complete reviewed unit inventory before describing a report as global progress. Keep per-function evidence and hashes traceable without embedding game bytes in the report.

### Phase 3: GitHub Actions and registration

Add a workflow on the default branch that runs the generator, validates the report with the supported objdiff tooling, and uploads the required versioned report artifact (for example, `<version>_report` containing `report.json`). Do not run privileged self-hosted jobs on untrusted pull requests. Select the least exposed execution model that can access the validated inputs; if that cannot be done safely and reproducibly, stop.

After a successful artifact exists, register `https://github.com/soldieg/ReBLACK-XBOX` at decomp.dev. Install the decomp.dev GitHub App only for this repository if automatic workflow notifications and PR comments are wanted; the app does not generate reports.

## Alternatives considered

1. **Recommended: evidence-first pilot, then reporting.** This protects the meaning of the dashboard and allows the work to stop cleanly if Xbox target objects or safe inputs are unavailable.
2. **Placeholder workflow.** It could make a workflow appear in the registration form, but without a valid objdiff report it would not provide project progress. Rejected.
3. **Publish inventory counts as matching progress.** It would conflate analysis inventory and reconstruction activity with binary equivalence. Rejected.

## Security and data boundaries

- Keep the original game copy and extracted material local.
- Do not commit XBE-derived code, generated lifts, game assets, object files, or secrets to the public hub.
- Publish only the minimum report data needed for decomp.dev after reviewing its contents.
- Restrict workflow triggers and permissions to what the report job needs; do not expose private inputs to pull-request code.

## Acceptance criteria

- The pilot has a reproducible record of inputs, hashes, REA/XboxRecomp evidence, comparison output, and limitations.
- A failed pilot leaves the decomp.dev percentage unpublished and the reason documented.
- A successful pilot supports a validated report generator and an Actions artifact that decomp.dev can ingest.
- The registered project shows only verified matching measures, with its denominator and limitations documented.
- The decomp.dev app, if installed, is scoped to `ReBLACK-XBOX`.

## Review boundary

This document specifies the proposed design only. It does not authorize reporting an unverified percentage, publishing game files, or claiming that a pilot has passed.