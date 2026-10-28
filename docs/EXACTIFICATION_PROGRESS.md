# 346-function exactification queue

**Queue snapshot date:** 2026-10-18
**Dashboard exactification refresh:** 2026-10-27

The 346-function exactification queue remains separate from the incomplete 13,676-candidate dashboard snapshot. After lot 81 merged, the dashboard reports 8,426 exact candidates and 1,581,176 exact code bytes out of 2,297,156 (68.83189474%); raw fuzzy ObjDiff remains 0.66778016%. Lot 82 is still being reconciled: 83/100 unique members are currently supported by the recorded checkpoint. Later static validations remain uncounted until the starting roster is recovered. The live dashboard does not yet include lot 82. The reviewed ObjDiff report is unchanged. The dashboard reconciles exact records and raw ObjDiff matches by function identity and counts overlaps once. GitHub API and `main` ancestry checked on 2026-10-27: code lots 24–81 are merged.

The public function list contains only function IDs, addresses, sizes, and exact status. It contains no reconstructed source, game bytes, binaries, local evidence paths, or private hashes. The 346-entry queue remains a separate measure from the 13,676-candidate objdiff snapshot; the additional records are not included in its denominator.

| Queue status | Count |
| --- | ---: |
| Freshly revalidated exact passes | 346 |
| Recorded results awaiting fresh revalidation | 0 |
| Batch rows classified as nonexact | 0 |
| **Total batch** | **346** |

That is **346/346 (100%)** of this exactification queue revalidated; **0/346** await fresh validation. The 100% applies only to the defined 346-function queue, not to the whole game or the 13,676-candidate split inventory.

All 346 queue entries have a current static/build-diff exact pass. That 346/346 result applies only to the defined queue, not to the whole game or the 13,676-candidate split inventory. The `reconstructions/validation-index.json` remains the maintainer-reviewed acceptance record and has not been changed by this proposal.

## Verified batch results

The merged candidate map covers code lots 43–79, with 100 functions in each lot. GitHub API and `main` ancestry were checked on 2026-10-27: lots 69–79 are merged.

| Lot | Code PR | PR state | Functions | Bytes | Static / ObjDiff | Unresolved Ghidra call sites |
| ---: | --- | --- | ---: | ---: | --- | ---: |
| 43 | [#4496](https://github.com/soldieg/ReBLACK-XBOX/pull/4496) | merged | 100/100 | 23,324 | 100/100 at 100% | 0 |
| 44 | [#4640](https://github.com/soldieg/ReBLACK-XBOX/pull/4640) | merged | 100/100 | 14,881 | 100/100 at 100% | 0 |
| 45 | [#4756](https://github.com/soldieg/ReBLACK-XBOX/pull/4756) | merged | 100/100 | 18,584 | 100/100 at 100% | 0 |
| 46 | [#4902](https://github.com/soldieg/ReBLACK-XBOX/pull/4902) | merged | 100/100 | 21,267 | 100/100 at 100% | 0 |
| 47 | [#5003](https://github.com/soldieg/ReBLACK-XBOX/pull/5003) | merged | 100/100 | 17,255 | 100/100 at 100% | 0 |
| 48 | [#5104](https://github.com/soldieg/ReBLACK-XBOX/pull/5104) | merged | 100/100 | 23,284 | 100/100 at 100% | 0 |
| 49 | [#5206](https://github.com/soldieg/ReBLACK-XBOX/pull/5206) | merged | 100/100 | 31,027 | 100/100 at 100% | 0 |
| 50 | [#5307](https://github.com/soldieg/ReBLACK-XBOX/pull/5307) | merged | 100/100 | 31,350 | 100/100 at 100% | 0 |
| 51 | [#5408](https://github.com/soldieg/ReBLACK-XBOX/pull/5408) | merged | 100/100 | 24,126 | 100/100 at 100% | 0 |
| 52 | [#5509](https://github.com/soldieg/ReBLACK-XBOX/pull/5509) | merged | 100/100 | 13,902 | 100/100 at 100% | 0 |
| 53 | [#5610](https://github.com/soldieg/ReBLACK-XBOX/pull/5610) | merged | 100/100 | 32,511 | 100/100 at 100% | 0 |
| 54 | [#5711](https://github.com/soldieg/ReBLACK-XBOX/pull/5711) | merged | 100/100 | 33,434 | 100/100 at 100% | 14 |
| 55 | [#5813](https://github.com/soldieg/ReBLACK-XBOX/pull/5813) | merged | 100/100 | 36,896 | 100/100 at 100% | 271 |
| 56 | [#5913](https://github.com/soldieg/ReBLACK-XBOX/pull/5913) | merged | 100/100 | 30,796 | 100/100 at 100% | 217 |
| 57 | [#6060](https://github.com/soldieg/ReBLACK-XBOX/pull/6060) | merged | 100/100 | 31,475 | 100/100 at 100% | 0 |
| 58 | [#6161](https://github.com/soldieg/ReBLACK-XBOX/pull/6161) | merged | 100/100 | 31,153 | 100/100 at 100% | 186 |
| 59 | [#6255](https://github.com/soldieg/ReBLACK-XBOX/pull/6255) | merged | 100/100 | 39,782 | 100/100 at 100% | 218 |
| 60 | [#6350](https://github.com/soldieg/ReBLACK-XBOX/pull/6350) | merged | 100/100 | 20,010 | 100/100 at 100% | 224 |
| 61 | [#6450](https://github.com/soldieg/ReBLACK-XBOX/pull/6450) | merged | 100/100 | 17,909 | 100/100 at 100% | 181 |
| 62 | [#6636](https://github.com/soldieg/ReBLACK-XBOX/pull/6636) | merged | 100/100 | 5,776 | 100/100 at 100% | 10 |
| 63 | [#6737](https://github.com/soldieg/ReBLACK-XBOX/pull/6737) | merged | 100/100 | 5,834 | 100/100 at 100% | 18 |
| 64 | [#6838](https://github.com/soldieg/ReBLACK-XBOX/pull/6838) | merged | 100/100 | 8,893 | 100/100 at 100% | 18 |
| 65 | [#6942](https://github.com/soldieg/ReBLACK-XBOX/pull/6942) | merged | 100/100 | 7,272 | 100/100 at 100% | 9 |
| 66 | [#7043](https://github.com/soldieg/ReBLACK-XBOX/pull/7043) | merged | 100/100 | 6,148 | 100/100 at 100% | 5 |
| 67 | [#7144](https://github.com/soldieg/ReBLACK-XBOX/pull/7144) | merged | 100/100 | 5,600 | 100/100 at 100% | 4 |
| 68 | [#7245](https://github.com/soldieg/ReBLACK-XBOX/pull/7245) | merged | 100/100 | 5,129 | 100/100 at 100% | 3 |
| 69 | [#7346](https://github.com/soldieg/ReBLACK-XBOX/pull/7346) | merged | 100/100 | 5,763 | 100/100 at 100% | 8 |
| 70 | [#7431](https://github.com/soldieg/ReBLACK-XBOX/pull/7431) | merged | 100/100 | 6,164 | 100/100 at 100% | 7 |
| 71 | [#7453](https://github.com/soldieg/ReBLACK-XBOX/pull/7453) | merged | 100/100 | 12,097 | 100/100 at 100% | 37 |
| 72 | [#7563](https://github.com/soldieg/ReBLACK-XBOX/pull/7563) | merged | 100/100 | 8,585 | 100/100 at 100% | 62 |
| 73 | [#7664](https://github.com/soldieg/ReBLACK-XBOX/pull/7664) | merged | 100/100 | 4,203 | 100/100 at 100% | 14 |
| 74 | [#7756](https://github.com/soldieg/ReBLACK-XBOX/pull/7756) | merged | 100/100 | 8,603 | 100/100 at 100% | 91 |
| 75 | [#7856](https://github.com/soldieg/ReBLACK-XBOX/pull/7856) | merged | 100/100 | 12,634 | 100/100 at 100% | 74 |
| 76 | [#7957](https://github.com/soldieg/ReBLACK-XBOX/pull/7957) | merged | 100/100 | 4,470 | 100/100 at 100% | 20 |
| 77 | [#8058](https://github.com/soldieg/ReBLACK-XBOX/pull/8058) | merged | 100/100 | 4,679 | 100/100 at 100% | 67 |
| 78 | [#8159](https://github.com/soldieg/ReBLACK-XBOX/pull/8159) | merged | 100/100 | 6,009 | 100/100 at 100% | 33 |
| 79 | [#8260](https://github.com/soldieg/ReBLACK-XBOX/pull/8260) | merged | 100/100 | 2,867 | 100/100 at 100% | 13 |
| 80 | [#8363](https://github.com/soldieg/ReBLACK-XBOX/pull/8363) | merged | 100/100 | 1,882 | 100/100 at 100% | not included in batch summary |
| 81 | [#8465](https://github.com/soldieg/ReBLACK-XBOX/pull/8465) | merged | 100/100 | 27,431 | 100/100 at 100% | 162 |
Code lots 49–60 are merged. Lot 60’s 100 function records are merged in PR #6350. Lot 61 merged in PR #6450. Lot 54 has 14 unresolved call instructions across 7 functions. Lot 55 has 271 across 99 functions; 99 new sources were added and one existing source preserved, with four C4100 warnings in that preserved source. Lot 56 has 217 unresolved call instructions across 95 functions; it preserves two existing sources. These unresolved destinations remain unknown. Lot 56 has 99 unmatched dashboard candidates and one fuzzy candidate; its 46.48% fuzzy similarity is candidate metadata, separate from ObjDiff.

Lot 59 adds 100 rows totaling 39,782 bytes. All 100 passed static equality, fresh x86 compilation, and ObjDiff at 100.00%, with 100 exact contiguous Ghidra bodies. Ghidra reports 218 computed call sites whose destinations remain unresolved; there are no unresolved direct calls. Four members of one connected callback-table group have ownerless `.rdata` references, so their ABI remains pending. `sub_000E62A0` still lacks the formal REA dossier; its observed initialization path is documented from local Ghidra. At that branch-preview checkpoint, the map reported 5,975 additional exact-byte rows and **6,326 exact candidates / 1,399,052 bytes (60.9037%)** across the incomplete 13,676-candidate snapshot. The raw objdiff report still contributes 29 fuzzy candidates / 0.6678%. These records establish static byte exactness and candidate ObjDiff only; they do not establish semantic C, formal ABI, Xbox linking, post-link XBE equality, runtime, or gameplay. The independent 346-entry accepted-reconstruction queue remains 346/346. The public `validatedReconstructionCount` remains 0; the maintainer-only `reconstructions/validation-index.json` was not changed. These dashboard records establish static byte exactness and candidate ObjDiff only; they do not establish semantic C, formal ABI, Xbox linking, post-link XBE equality, runtime, or gameplay.

To refresh the page, update the sanitized function statuses, run `python tools/decompdev/build_dashboard.py`, review the generated preview, then commit the updated data and page changes. GitHub Actions validates the report and publishes the dashboard from the commit. Detailed C sources, binaries, target bytes, and local evidence remain outside this repository.


Lot 60 contains 100 new candidate records totaling 20,010 bytes. All 100 have exact contiguous Ghidra bodies and byte equality across Ghidra, XBE raw, derived PE, XboxRecomp split, named candidate object, and compiled x86 object. MSVC 19.51.36260 compiled all 100 without warnings; ObjDiff 3.8.2 reports 100.00% for all 100 named candidate symbols. Ghidra reports 224 unresolved computed/indirect call sites and no unresolved direct calls. Twelve ownerless inbound data references are preserved in complete table groups; their ABI meaning remains pending. These records are address-pinned byte emitters, not semantic C or formal ABI recovery. Xbox link, post-link XBE diff, runtime, and gameplay remain pending. The exactification status data now carries 6,075 additional exact-byte records; that checkpoint reported 6,426 exact candidates / 1,419,062 bytes (61.7747%) and 0.6678% fuzzy ObjDiff candidates. The independent accepted-reconstruction queue and maintainer validation count retain their separate scopes.

Lot 61 adds 100 candidate records totaling 17,909 bytes. All 100 have contiguous Ghidra 12.1.3 bodies matching the XboxRecomp split bodies; all 100 appear by address and size in the 2026-10-26 exact raw-static screen. MSVC 19.51.36260 x86 compiled all 100 without diagnostics, and ObjDiff 3.8.2 reports 100.00% against each named candidate object. Ghidra records 181 unresolved computed/indirect call sites across 95 functions, with no unresolved direct callees, ownerless inbound references, or inbound data references. Each function has an Issue and a sanitized evidence file. These sources are address-pinned byte emitters, not semantic C or formal ABI recovery. Xbox link, post-link XBE diff, runtime, and gameplay remain pending. At that checkpoint, the merged map carried 6,175 additional exact-byte records and reported 6,526 exact candidates / 1,436,971 bytes (62.55434981%) across the incomplete 13,676-candidate snapshot; fuzzy ObjDiff remains 0.66778016%. The independent accepted-reconstruction queue and maintainer validation count retain their separate scopes; `reconstructions/validation-index.json` is unchanged.


Lot 67 merged in PR #7144 with 100 functions totaling 5,600 bytes. Its merge-triggered ReBLACK Xbox progress dashboard workflow completed successfully, and the public Pages endpoint returned HTTP 200. All 100 have contiguous Ghidra 12.1.3 bodies, and original XBE mapped, derived PE, Ghidra, and XboxRecomp split bytes match. MSVC 19.51.36260 x86 compiled all sources without diagnostics; ObjDiff 3.8.2 reports 100.00% for each named candidate, and candidate/compiled COFF `.text$mn` sections match byte for byte (5,600/5,600 bytes, 0/0 relocations). Ghidra reports 4 unresolved computed/indirect call sites across 4 functions and no unresolved direct calls. These are address-pinned byte emitters, not semantic C or formal ABI reconstructions. Xbox link, post-link XBE diff, runtime, and gameplay remain pending. At that checkpoint, the combined dashboard reported 7,126 exact candidates / 1,475,789 exact bytes (64.24417845%) after lots 62–68; raw fuzzy ObjDiff remains 0.66778016%. `reconstructions/validation-index.json` and the 346-function accepted-reconstruction queue are unchanged.


Lot 68 merged in PR #7245 with 100 functions totaling 5,129 bytes. All 100 have contiguous Ghidra 12.1.3 bodies, and original XBE mapped, derived PE, Ghidra, and XboxRecomp split bytes match. MSVC 19.51.36260 x86 compiled all sources without diagnostics; ObjDiff 3.8.2 reports 100.00% for each named candidate, and candidate/compiled COFF `.text$mn` sections match byte for byte (5,129/5,129 bytes, 0/0 relocations). Ghidra reports 3 unresolved computed/indirect call sites across 3 functions and no unresolved direct calls. These are address-pinned byte emitters, not semantic C or formal ABI reconstructions. Xbox link, post-link XBE diff, runtime, and gameplay remain pending. At that checkpoint, the combined dashboard reported 7,126 exact candidates / 1,475,789 exact bytes (64.24417845%) after lots 62–68; raw fuzzy ObjDiff remains 0.66778016%. `reconstructions/validation-index.json` and the 346-function accepted-reconstruction queue are unchanged.

## Lot 79 merged

Lot 79 merged in [PR #8260](https://github.com/soldieg/ReBLACK-XBOX/pull/8260), adding 100 new candidate records totaling 2,867 bytes. All 100 have contiguous Ghidra 12.1.3 bodies and byte equality across original XBE mapped bytes, the derived PE, Ghidra bodies, and XboxRecomp splits. MSVC 19.51.36260 x86 compiled all 100 without diagnostics; ObjDiff 3.8.2 reports 100.00% against each named candidate, and candidate/compiled COFF `.text$mn` sections match byte for byte (2,867/2,867 bytes, 0/0 relocations). Ghidra reports 13 unresolved computed/indirect call sites and no unresolved direct calls. Each function has a dedicated open Issue and sanitized evidence file. These are address-pinned byte emitters, not semantic C or formal ABI reconstructions. Xbox link, post-link XBE diff, runtime, and gameplay remain pending. The refreshed combined dashboard reports 8,226 exact candidates / 1,551,863 exact bytes (67.55583861%) across the incomplete 13,676-candidate snapshot; raw fuzzy ObjDiff remains 0.66778016% and the maintainer-validated reconstruction count remains 0. All code PRs for lots 69–79 are merged. The progress-dashboard workflow completed successfully, and the live data endpoint now reports 8,226 exact candidates / 1,551,863 exact bytes. The maintainer validation index and 346-function queue are unchanged.

## Lot 80 merged

Lot 80 merged in [PR #8363](https://github.com/soldieg/ReBLACK-XBOX/pull/8363), adding 100 functions and 1,882 bytes. The batch records contiguous Ghidra 12.1.3 bodies, byte equality across XBE raw, derived PE, Ghidra, and XboxRecomp split, clean MSVC x86 compilation, 100/100 ObjDiff at 100%, and identical COFF .text$mn sections (1,882/1,882 bytes; 0/0 relocations). The unresolved computed/indirect call total was not included in its batch summary; no unresolved direct calls were reported. The live dashboard reports 8,326 exact candidates / 1,553,745 bytes (67.63776600%). Public semantic reconstruction count remains 0; the maintainer validation index and separate 346-function queue were not modified. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.

## Lot 81 merged

Lot 81 merged in [PR #8465](https://github.com/soldieg/ReBLACK-XBOX/pull/8465), adding 100 functions and 27,431 bytes. Ghidra 12.1.3 confirms contiguous bodies; original XBE mapped bytes, derived PE, Ghidra bodies, and XboxRecomp splits match byte for byte. MSVC 19.51.36260 x86 compiled all 100 without diagnostics; ObjDiff 3.8.2 reports 100/100 at 100% against named candidate objects; candidate and compiled COFF .text$mn sections match for 27,431/27,431 bytes with 0/0 relocations. Ghidra records 162 computed/indirect call destinations unresolved and no unresolved direct calls. These are address-pinned byte emitters, not semantic C or formal ABI reconstructions. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.

The merge-triggered dashboard workflow run 40497280082 completed successfully. The public Pages endpoint returned HTTP 200 and reports 8,426 exact candidates / 1,581,176 bytes (68.83189474%) across the incomplete 13,676-candidate snapshot; fuzzy ObjDiff remains 0.66778016%, and maintainer-validated semantic reconstructions remain 0. The maintainer validation index and independent 346-function queue were not changed.

## Lot 82 reconciliation in progress

The published checkpoint supports 83/100 distinct functions. Additional lot 82 candidates have individual static byte and ObjDiff evidence, but their membership is not countable until the initial 74-function roster is recovered and compared for duplicates. No lot 82 exactification records are added to the dashboard snapshot while that roster remains unresolved. The public Pages dashboard therefore still reflects lot 81. These are address-pinned byte emitters, not semantic C or formal ABI reconstructions. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.
