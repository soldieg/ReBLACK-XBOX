# decomp.dev Xbox Reporting Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Publish a trustworthy ReBLACK-XBOX progress report to decomp.dev only after proving a compatible comparison method and reconciling the function inventory.

**Architecture:** Run a local, evidence-backed pilot first with REA and XboxRecomp. Keep the XBE and comparison objects local; commit only reviewed, sanitized objdiff report data. GitHub Actions validates and uploads that report without access to game files. Stop before reporting if the pilot or inventory audit fails.

**Tech Stack:** REA, XboxRecomp, objdiff-cli, Python 3 standard library, GitHub Actions, decomp.dev report v2.

**Spec:** [`docs/superpowers/specs/2026-10-14-decompdev-xbox-report-design.md`](../specs/2026-10-14-decompdev-xbox-report-design.md)

## Global Constraints

- Keep the original game copy and extracted material local.
- Do not commit XBE-derived code, generated lifts, game assets, object files, or secrets to the public hub.
- Do not report an unverified percentage or treat function counts, generated lifts, harnesses, or runtime observations as matching progress.
- Use REA for evidence and identity checks where supported; use XboxRecomp for XBE-aware parsing and function boundaries.
- Keep compiled pilot outputs under `decompilacao/compilacao`.
- Do not run privileged self-hosted jobs on untrusted pull requests.
- Publish only the minimum report data needed for decomp.dev after reviewing its contents.

## Review Focus

1. **Function inventory disagreement:** the split manifest lists 13,676 functions while the analysis summary lists 16,702; reconcile aliases, data, thunks, and omitted code before claiming a global denominator.
2. **No genuine relocatable target:** a reconstructed base object or raw XBE bytes alone do not prove an objdiff-comparable target object; stop if the pilot cannot produce a valid target/base pair.
3. **Generated-lift and harness confusion:** neither generated C lifts nor isolated harnesses count as matching functions without a verified object comparison.
4. **Public report leakage:** report and artifact must contain no XBE, game assets, reconstructed source, object bytes, local paths, or secrets.
5. **Runner trust boundary:** workflow must not expose private inputs or privileged runners to pull-request code.

---

## File map

### Local-only evidence and build outputs

- Create: `decompilacao/proveniencia/decompdev-pilot/pilot.md` — pilot identity, commands, hashes, comparison result, and limitations; no binary payloads.
- Create: `decompilacao/proveniencia/decompdev-pilot/target-candidate.json` — local-only mapping of the chosen target range to its evidence.
- Create: `decompilacao/proveniencia/decompdev-pilot/objdiff.json` — local-only paths to target/base object files.
- Create: `decompilacao/compilacao/decompdev-pilot/` — target/base objects and raw objdiff output.

### Public repository files

- Create: `tools/decompdev/progress-source.json` — reviewed, sanitized objdiff report v2 data; no game bytes or local paths.
- Create: `tools/decompdev/prepare_report.py` — deterministic validation and serialization of the reviewed source data into the artifact report.
- Create: `tools/decompdev/tests/test_prepare_report.py` — standard-library tests for valid reports, malformed or incomplete data, and data-leak rejection.
- Create: `.github/workflows/decompdev-report.yml` — validate and upload the versioned report artifact from trusted branch pushes and manual runs.
- Modify: `DECOMP_DEV.md` — record pilot result, inventory scope, report artifact name, and registration state.
- Modify: `README.md` and `PROJECT_STATUS.md` — link integration status only after a truthful report exists.

At execution start, clone `soldieg/ReBLACK-XBOX` into `decompilacao/proveniencia/ReBLACK-XBOX-public/` so repository edits and local validation remain separate from the preserved game workspace.

---

### Task 1: Prove one Xbox target/base comparison

**Files:**
- Create local: `decompilacao/proveniencia/decompdev-pilot/pilot.md`
- Create local: `decompilacao/proveniencia/decompdev-pilot/target-candidate.json`
- Create local: `decompilacao/proveniencia/decompdev-pilot/objdiff.json`
- Create compiled outputs: `decompilacao/compilacao/decompdev-pilot/`

**Interfaces:**
- Consumes: local XBE at `jogo xbox/black/default.xbe`; existing function splits under `decompilacao/funcoes-separadas/split-full-DF2739C3-20261013/`; candidate manual reconstructions under `decompilacao/reconstrucoes/function-reconstructions/`; standalone objects under `decompilacao/compilacao/objetos/`.
- Produces: a repeatable one-function objdiff comparison record, or an explicit blocked result. Later tasks run only after a passing result.

- [ ] **Step 1: Select one candidate with existing provenance.** Choose a manual reconstruction that has a mapped XBE address/range, a recorded evidence chain, and an existing harness or standalone object. Record why it is the strongest available candidate in `pilot.md`.
- [ ] **Step 2: Establish target identity with REA.** Open the local XBE with REA and record the evidence ID and SHA-256. If REA cannot accept this XBE, record the refusal and use XboxRecomp for XBE parsing; do not claim an independent REA analysis in that case.
- [ ] **Step 3: Confirm the target function range with XboxRecomp.** Record the split manifest entry, exact address, size, section, and boundary method for the selected function. Reject the candidate if its range is ambiguous or overlaps data.
- [ ] **Step 4: Build the reconstructed candidate into the required output folder.** Place every generated object under `decompilacao/compilacao/decompdev-pilot/`; record the exact toolchain/version and object SHA-256.
- [ ] **Step 5: Establish a genuine target object.** Determine whether the original function can be represented as an objdiff-supported relocatable target object without inventing relocations or publishing game bytes. Record the extraction/reconstruction method and its limits.
- [ ] **Step 6: Run objdiff on the genuine target/base pair.** Use the local `objdiff.json` and the documented `objdiff-cli report generate` command to produce raw JSON under `decompilacao/compilacao/decompdev-pilot/`. Save the exact command, tool version, report output hash, and object hashes in `pilot.md`. A pass requires objdiff to accept both objects and return measures consistent with the bytes being compared.
- [ ] **Step 7: Apply the gate.** If any prerequisite fails, update `DECOMP_DEV.md` with the specific blocker and stop the plan. Do not create a placeholder workflow or publish a percentage. If all pass, continue to Task 2.

### Task 2: Reconcile the complete function inventory

**Files:**
- Read: `decompilacao/funcoes-separadas/split-full-DF2739C3-20261013/manifest.json`
- Read: `decompilacao/xbe-analysis/function-id/summary.json`
- Update local: `decompilacao/proveniencia/decompdev-pilot/objdiff.json`
- Create: `tools/decompdev/progress-source.json`

**Interfaces:**
- Consumes: passing pilot record from Task 1 plus the XboxRecomp split manifest and function-ID summary.
- Produces: a reviewed, version-specific objdiff report v2 with one stable unit ID per included function and a complete denominator, or an explicit blocker.

- [ ] **Step 1: Compare the two inventories.** Produce a local diff of the 13,676 split entries and 16,702 function-ID entries keyed by address; classify duplicates, aliases, thunks, data, and unclassified ranges.
- [ ] **Step 2: Resolve every difference that affects the denominator.** Use XboxRecomp boundary evidence and REA where supported. Keep unresolved entries out of a global report and record why; do not silently discard them.
- [ ] **Step 3: Approve the report scope.** If a complete unique function denominator cannot be supported, stop before global reporting. If it can, record the exact XBE identity/version and reviewed total.
- [ ] **Step 4: Build the complete local objdiff configuration.** Add one unit per reviewed XBE function; use a target object produced by the validated Task 1 method and a base object only where reconstructed source has a verified build. Keep unmatched functions explicitly without a base object. Exclude generated lifts and harnesses as matching source.
- [ ] **Step 5: Generate the full local objdiff report.** Write raw output to `decompilacao/compilacao/decompdev-pilot/report-raw.json`; confirm unit totals equal the reviewed inventory and all matches come from object comparisons.
- [ ] **Step 6: Create the public source from the raw report.** Run the Task 3 serializer locally to remove file paths and any fields outside the approved report schema; save only sanitized v2 JSON as `tools/decompdev/progress-source.json`.
- [ ] **Step 7: Audit the public source file.** Confirm it contains no function bytes, decompiler output, local absolute paths, asset data, secrets, or object contents. If any are present, stop and correct the serializer before committing.

### Task 3: Implement and verify the report serializer

**Files:**
- Create: `tools/decompdev/prepare_report.py`
- Create: `tools/decompdev/tests/test_prepare_report.py`
- Input: local raw objdiff report v2 from Task 1/2 or sanitized `progress-source.json` in CI.
- Output: `build/decompdev/report.json`, a sanitized JSON-encoded objdiff Report version 2.

**Interfaces:**
- CLI: `python tools/decompdev/prepare_report.py --input PATH --output PATH`.
- The serializer preserves the report's measures and units, drops object/local file paths, rejects non-v2 reports, duplicate unit IDs, inconsistent totals, and incomplete global inventories, and is idempotent on sanitized input.

- [ ] **Step 1: Write failing tests for the serializer.** Cover one exact match, one unmatched unit, malformed addresses/sizes, duplicate unit IDs, inconsistent totals, non-v2 input, local-path leakage, and idempotent output.
- [ ] **Step 2: Run the focused tests and confirm the expected failures.**
- [ ] **Step 3: Implement `prepare_report.py`.** Use Python 3 standard library only; derive totals from objdiff unit measures and fail closed on invalid input.
- [ ] **Step 4: Run the focused tests and confirm valid measures and rejection cases.**
- [ ] **Step 5: Validate the emitted report.** Confirm `version == 2`, all per-unit measures reconcile with aggregates, and only approved fields remain.
- [ ] **Step 6: Commit the serializer, tests, and sanitized report source together.**

### Task 4: Add the GitHub Actions artifact workflow

**Files:**
- Create: `.github/workflows/decompdev-report.yml`

**Interfaces:**
- Consumes: `prepare_report.py` and reviewed `progress-source.json`.
- Produces: `<verified-version>_report/report.json` as a GitHub Actions artifact.

- [ ] **Step 1: Add a workflow triggered by pushes to `main` and `workflow_dispatch`.** Do not add a `pull_request` trigger or a self-hosted runner.
- [ ] **Step 2: Pin each external Action to a reviewed immutable commit SHA.** Use least-privilege token permissions and no secrets.
- [ ] **Step 3: Run the report serializer and its focused tests.** Fail the workflow before artifact upload if validation fails.
- [ ] **Step 4: Upload only the generated `report.json`** under an artifact name derived from the XBE version confirmed in Task 2.
- [ ] **Step 5: Inspect the workflow run.** Confirm the report artifact exists and contains only the expected JSON file, with no XBE/object inputs.

### Task 5: Register and document the live dashboard

**Files:**
- Modify: `DECOMP_DEV.md`
- Modify: `README.md`
- Modify: `PROJECT_STATUS.md`

**Interfaces:**
- Consumes: one successful default-branch Actions artifact from Task 4.
- Produces: a registered decomp.dev project and accurate public status documentation.

- [ ] **Step 1: Confirm the workflow artifact name and report version in GitHub Actions.**
- [ ] **Step 2: Register `https://github.com/soldieg/ReBLACK-XBOX` at `https://decomp.dev/manage/new`.** Confirm the selected workflow is the report workflow and the initial measures match the validated artifact.
- [ ] **Step 3: Install the decomp.dev GitHub App scoped only to `ReBLACK-XBOX`** if the account UI permits repository-only access; confirm the requested permissions and resulting scope.
- [ ] **Step 4: Update the three status documents.** State the exact report scope and denominator; describe a pilot subset as a subset, never as whole-game coverage.
- [ ] **Step 5: Commit the documentation update and verify the public dashboard link.**

---

## Conditional completion

If Task 1 fails, the complete deliverable is the local evidence record plus an updated public blocker note; Tasks 2–5 remain intentionally unimplemented. If Task 2 cannot reconcile the denominator, publish no global percentage. If Tasks 1–4 pass, register and document the report in Task 5.

## Plan self-review

- **Spec coverage:** pilot, report serializer, safe Actions artifact, registration, optional app scope, evidence boundaries, and fail-closed conditions are covered by Tasks 1–5.
- **Step granularity:** each step produces one named record, code change, artifact, or decision.
- **Interface consistency:** Task 1 produces comparison evidence; Task 2 consumes it and creates sanitized report input; Task 3 validates/serializes that input; Task 4 uploads it; Task 5 registers the artifact.
- **Review focus:** inventory disagreement is checked in Task 2; relocatable target and lifts/harnesses are gated in Task 1; data leakage is audited in Tasks 2–4; runner exposure is constrained in Task 4.
- **Proportion:** tasks are sequential because each phase depends on the preceding evidence gate; no workflow or report is created before its inputs are validated.