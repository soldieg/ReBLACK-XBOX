# decomp.dev reporting status

The project is registered at [decomp.dev](https://decomp.dev/soldieg/ReBLACK-XBOX). Its GitHub Actions workflow publishes a sanitized objdiff v2 report as the `BLACK_report` artifact. decomp.dev reads that artifact; it does not accept a percentage pushed directly from this workspace.

## Current report snapshot

- Scope: **13,676 XboxRecomp split candidates** from the reviewed manifest. This is a candidate snapshot, not a complete linked-unit inventory.
- Target side: one MASM object per candidate, assembled from XboxRecomp's byte-preserving split listings.
- Base side: **130** independent MSVC x86 objects built from the available manual C reconstructions. At the time of that report snapshot, 79 files were marked complete and 7 in progress in the local tracker. The current local XboxRecomp split static-review tracker (2026-10-16) records **333 complete** and **77 in progress** out of 13,676 candidate rows; this newer count is not a build/diff result and does not alter the published objdiff report.
- objdiff v3.8.2 results: **406 / 2,297,156 exact code bytes (0.0176740%)**, 47 exact functions, and **0.2113089% fuzzy match**.
- Every report unit is marked `complete=false`. This records that the candidate ranges are not proven original linked units.
- The exact-code figure remains below 0.5%; the badge currently rounds it to **0.02%**.

Latest publication: [GitHub Actions run #4](https://github.com/soldieg/ReBLACK-XBOX/actions/runs/38688101097) succeeded on commit `5c0f801e1902eb8befabb792855e68815a8ad06d` and uploaded `BLACK_report`. The [decomp.dev report JSON](https://decomp.dev/projects/1419097310.json?mode=report&version=BLACK) is the project panel source. The 44 new local function reconstructions passed isolated compile and byte comparison; objdiff counted 35 of them as exact matches, and 9 did not register as exact at split-object level.

The 13,676 split entries are not the only detected starts: the refined XboxRecomp detector inventory has 16,598 candidates. Its ranges include overlaps and uncertain boundaries, and the inspected project has no original linker map or equivalent complete object mapping. Neither candidate count is presented as a proven whole-game denominator.

## Publication flow

1. Build target/base objects and run objdiff locally. Keep the XBE, source C files, generated assembly, and object files in the local workspace.
2. Sanitize the objdiff v2 report into `tools/decompdev/progress-source.json` and record its scope in `tools/decompdev/inventory-approval.json`.
3. Push changes to `main` or run the workflow manually. GitHub Actions checks the declared scope and report schema, then uploads `BLACK_report/report.json` for decomp.dev to ingest.

GitHub Actions does not rebuild the XBE or regenerate the target/base objects. Its validation rejects local paths and unapproved report fields. The public repository contains the sanitized report and status documents, not the game's executable, extracted code, reconstruction source files, or object files.

## What this report proves

The 47 exact matches show that the compiled C objects contain byte-identical code for those 47 candidate ranges under the recorded local compiler settings. Fuzzy matching measures similar code that is not byte-identical. This does not establish that all original functions or linked objects have been found, nor does it prove runtime behavior or a PC recompilation.

The previous one-function pilot report remains in the project's decomp.dev history. It has been superseded by this 13,676-candidate snapshot for the latest report.

## Local status update (2026-10-16)

The allocator root `sub_000285B9` has a manual C draft under static review. A partial semantic review compared the major allocation, bin selection, split/coalescing, cleanup, and callback stages against the saved REA pseudocode without finding a concrete discrepancy; this is not an instruction-by-instruction equivalence proof. Focused static cross-checks cover the zero-fill path, virtual-region header, SEH state/cleanup flow, and callback event/order and post-call result flow. The related free-path group now has static C reconstructions for `sub_00027EEB` and the `sub_00028F15` cleanup adapter; `sub_00028D34` has a C draft and fresh partial Ghidra static review; callback target/ABI and exact SEH frame/table remain unresolved. Isolated MSVC x86 compiles pass for these sources. Full root C review, exact SEH frame/table reproduction, Xbox link/diff, and runtime validation remain pending. These updates change local documentation only; no new target/base object batch has been published, so the decomp.dev exact and fuzzy match figures above remain unchanged.

### Follow-up evidence (2026-10-16)

The allocator investigation added a bounded reference check for four candidate `+0x250` writer addresses. REA/Ghidra did not resolve those addresses to procedures or return direct references; this only describes the checked static coverage and does not rule out indirect calls or runtime aliases. No new target/base objects or byte-diff results came from this follow-up. The local tracker remains at **333 complete / 78 in progress** of 13,676 candidates. The published objdiff snapshot therefore remains **47 exact functions, 406 exact code bytes (0.0176740%), and 0.21520935% fuzzy**, with every candidate unit explicitly incomplete.
