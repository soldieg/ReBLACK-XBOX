# decomp.dev reporting status

The project is registered at [decomp.dev](https://decomp.dev/soldieg/ReBLACK-XBOX). Its GitHub Actions workflow publishes a sanitized objdiff v2 report as the `BLACK_report` artifact. decomp.dev reads that artifact; it does not accept a percentage pushed directly from this workspace.

## Current report snapshot

- Scope: **13,676 XboxRecomp split candidates** from the reviewed manifest. This is a candidate snapshot, not a complete linked-unit inventory.
- Target side: one MASM object per candidate, assembled from XboxRecomp's byte-preserving split listings.
- Base side: **86** independent MSVC x86 objects built from the available manual C reconstructions; 79 files are marked complete and 7 are in progress in the local tracker.
- objdiff v3.8.2 results: **85 / 2,297,156 exact code bytes (0.0037002%)**, 12 exact functions, and **0.1973351% fuzzy match**.
- Every report unit is marked `complete=false`. This records that the candidate ranges are not proven original linked units.
- The exact-code figure remains below 0.5%; the badge currently rounds it to **0.01%**.

Latest publication: [GitHub Actions run 38638705393](https://github.com/soldieg/ReBLACK-XBOX/actions/runs/38638705393) succeeded on commit `91d043445542e3b332ec8260ba4d18381b6f0d7f` and uploaded `BLACK_report`. The live [decomp.dev report JSON](https://decomp.dev/projects/1419097310.json?mode=report&version=BLACK) returns all 13,676 units and the measures above.

The 13,676 split entries are not the only detected starts: the refined XboxRecomp detector inventory has 16,598 candidates. Its ranges include overlaps and uncertain boundaries, and the inspected project has no original linker map or equivalent complete object mapping. Neither candidate count is presented as a proven whole-game denominator.

## Publication flow

1. Build target/base objects and run objdiff locally. Keep the XBE, source C files, generated assembly, and object files in the local workspace.
2. Sanitize the objdiff v2 report into `tools/decompdev/progress-source.json` and record its scope in `tools/decompdev/inventory-approval.json`.
3. Push changes to `main` or run the workflow manually. GitHub Actions checks the declared scope and report schema, then uploads `BLACK_report/report.json` for decomp.dev to ingest.

GitHub Actions does not rebuild the XBE or regenerate the target/base objects. Its validation rejects local paths and unapproved report fields. The public repository contains the sanitized report and status documents, not the game's executable, extracted code, reconstruction source files, or object files.

## What this report proves

The 12 exact matches show that the compiled C objects contain byte-identical code for those 12 candidate ranges under the recorded local compiler settings. Fuzzy matching measures similar code that is not byte-identical. This does not establish that all original functions or linked objects have been found, nor does it prove runtime behavior or a PC recompilation.

The previous one-function pilot report remains in the project's decomp.dev history. It has been superseded by this 13,676-candidate snapshot for the latest report.
