# 346-function exactification queue

**Queue snapshot date:** 2026-10-18
**Dashboard exactification refresh:** 2026-10-28

The 346-function exactification queue remains separate from the incomplete 13,676-candidate dashboard snapshot. The 2026-10-28 dashboard build reports 8,626 exact candidates and 1,651,157 exact code bytes out of 2,297,156 (71.87831388%); raw fuzzy ObjDiff remains 0.66778016%. Code Lots 24–89 are merged. Lot 84 has 100 distinct functions revalidated locally with fresh Ghidra/REA evidence, MSVC x86 builds, and ObjDiff 100.00%; these functions were already present in the exact-candidate snapshot, so the dashboard count correctly remains 8,626. Lot 84 evidence was published and merged in PR #8605; Lot 85 was published and merged in PR #8606. Dashboard exact-candidate totals remain unchanged because both lots revalidated already-counted functions. These candidate totals do not establish semantic acceptance, Xbox linking, post-link XBE equality, or runtime behavior.

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

The supported checkpoint is 86/100 distinct functions: the 83/100 status correction recorded on closed [PR #8589](https://github.com/soldieg/ReBLACK-XBOX/pull/8589), plus post-checkpoint appends `sub_000E3C30` (Issue #8593), `sub_000E3DC0` (Issue #8594), and `sub_00124CF0` (Issue #8595), all unmatched in the dashboard and absent from the prior exactification map. Each has fresh static equality and 100% ObjDiff evidence. Static passes for other later candidates, including `sub_00013C70`, `sub_00014510`, `sub_00014650`, `sub_00015C20`, and `sub_00018910`, remain uncredited until their identities are reconciled. `sub_00030D70` (Issue #4741) also remains uncredited. The original 74-function roster is unavailable; withdrawn historical ordinals 84–100 are not restored. The dashboard function map is not advanced until all 100 unique functions are reconciled. The live Pages dashboard therefore still reflects lot 81. These are address-pinned byte emitters, not semantic C or formal ABI reconstructions. Xbox link, post-link XBE diff, runtime, and gameplay remain pending.

### New post-checkpoint append — `sub_000E3C30` / Issue #8593

The candidate was selected from the live dashboard with category `unmatched`; searches found no prior open or closed Issue, and the current exactification function map has no record for the ID. Ghidra 12.1.3 body, XBE raw, derived PE, XboxRecomp split, freshly compiled MSVC x86 `.text$mn`, and the named candidate object agree byte-for-byte across the 270-byte span; ObjDiff 3.8.2 is 100.00%. Issue #8593 and sanitized source/evidence were added locally. This advances the supported working count from 83/100 to 84/100. The rest of the original 74-function roster is still unrecovered; no live dashboard data or PR has been updated.

### New post-checkpoint append — `sub_000E3DC0` / Issue #8594

The dashboard candidate was `unmatched`, absent from the prior exactification map, and had no earlier Issue. Ghidra 12.1.3 confirms a 267-byte body in two ranges within a 270-byte span; the 3-byte gap is alignment skipped by a jump. Caller `sub_00101C70` and callee `sub_0001D1E0` have complete relationship coverage. REA, XBE raw, derived PE, XboxRecomp split, C source, compiled MSVC x86 section, and the named candidate COFF `.text$mn` agree for 270/270 bytes; ObjDiff 3.8.2 reports 100.00%, with zero relocations in both object sections. The candidate comes from an XboxRecomp refresh inventory whose report marks units `complete=false`; this limits claims about the inventory/build, while exact target bytes were independently checked. The supported checkpoint advances from 84/100 to 85/100. Evidence: `reconstructions/evidence/sub_000E3DC0.md`; Issue #8594. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending. The live dashboard and PR are not updated until all 100 functions are reconciled.

### New post-checkpoint append — `sub_00124CF0` / Issue #8595

The dashboard candidate was `unmatched`, absent from the prior exactification map, and had no earlier Issue. Ghidra 12.1.3 confirms 466 body bytes in three ranges across a 482-byte span; both 8-byte gaps contain alignment skipped by jumps. Caller `sub_00124F00` and callee `sub_0011C3C0` have complete relationship coverage and local source/evidence. REA, XBE raw, derived PE, XboxRecomp split, C source, compiled MSVC x86 section, and the named candidate COFF `.text$mn` agree for 482/482 bytes; ObjDiff 3.8.2 reports 100.00%, with zero relocations in both object sections. The candidate comes from a refresh inventory marked `complete=false`; exact target bytes were independently checked. This advances the supported checkpoint from 85/100 to 86/100. Evidence: `reconstructions/evidence/sub_00124CF0.md`; Issue #8595. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending. The live dashboard and PR remain unchanged until all 100 functions are reconciled.


### New post-checkpoint append — `sub_0012EEF0` / Issue #8596

The dashboard candidate was `unmatched`, absent from the prior exactification map, and had no earlier Issue. Ghidra 12.1.3 confirms a 192-byte body in two ranges across a 201-byte span; the 9-byte gap is alignment skipped by a jump. Caller and callee queries both have complete coverage and return none. REA, original XBE raw, derived PE, XboxRecomp split, compiled MSVC x86 section, and the named candidate COFF `.text` agree across 201/201 bytes; ObjDiff 3.8.2 reports 100.00%. The candidate comes from a refresh inventory marked `complete=false`; exact target bytes were independently checked. This advances the supported checkpoint from 86/100 to 87/100. Evidence: `reconstructions/evidence/sub_0012EEF0.md`; Issue #8596. Xbox linking, post-link XBE diff, runtime, and gameplay remain pending. The live dashboard and PR remain unchanged until all 100 functions are reconciled.


### New post-checkpoint append — `sub_0012EFC0` / Issue #8597

The live dashboard candidate was `unmatched`, absent from the prior exactification map, and had no earlier source, evidence, or Issue. Ghidra 12.1.3 confirms a 558-byte body in two ranges across a 561-byte span; the 3-byte alignment gap is skipped by a jump. Direct caller/callee coverage is complete, and related functions have local source/evidence. REA, XBE raw, derived PE, XboxRecomp split, compiled MSVC x86 section, and named candidate COFF `.text` agree for 561/561 bytes; ObjDiff 3.8.2 reports 100.00%. The candidate comes from a refresh inventory marked `complete=false`; exact target bytes were independently confirmed. This advances the supported checkpoint from 87/100 to 88/100. Evidence: `reconstructions/evidence/sub_0012EFC0.md`; Issue #8597. Xbox link, post-link XBE diff, runtime, and gameplay remain pending. The live dashboard and PR remain unchanged until all 100 functions are reconciled.


### Connected group appended — `sub_00016730`, `sub_00016850`, `sub_001AD800` / Issues #4610, #4612, #8598

The two leaf candidates remained `unmatched` and absent from the prior exactification map. Their historical Issues were open and had not been counted. Ghidra 12.1.3 confirms each leaf has 172 body bytes in two ranges across a 175-byte span; each 3-byte alignment gap is skipped by a jump. Their caller/callee coverage is complete. The shared caller `sub_001AD800` was also `unmatched`, absent from the map, and had no source/evidence or prior Issue; it was added to resolve the C-source group blocker. Its Ghidra body contains 1,370 bytes across a 1,380-byte span with a 10-byte jump-skipped gap. Direct callsite assembly supports the observed argument setup. REA, XBE raw, derived PE, split, compiled MSVC x86 section, and named candidate object agree for all three spans; ObjDiff 3.8.2 reports 100.00% for each. The caller still has two unresolved computed call destinations, recorded as unknown. This advances lot 82 from 88/100 to 91/100 distinct dashboard candidates. Evidence: `reconstructions/evidence/sub_00016730.md`, `sub_00016850.md`, and `sub_001AD800.md`. Xbox link, post-link XBE diff, runtime, and gameplay remain pending. The live dashboard and PR remain unchanged until all 100 functions are reconciled.


### New post-checkpoint append — `sub_00042FB0` / Issue #4800

The live dashboard candidate was `unmatched`, absent from the prior exactification map, and had no local source/evidence record. Ghidra 12.1.3 confirms an 82-byte body in two ranges across an 88-byte span; the 6-byte alignment gap is skipped by a jump. Its direct caller coverage is complete and its one resolved direct callee has local source/evidence. One computed call through `[0x0056A76C]` remains unresolved; the pointer bytes read as zero in Ghidra memory, and no callback target is invented. REA, XBE raw, derived PE, XboxRecomp split, compiled MSVC x86 section, and named candidate COFF `.text$mn` match across 88/88 bytes; ObjDiff 3.8.2 reports 100.00%. This advances the supported lot 82 count from 91/100 to 92/100. Evidence: `reconstructions/evidence/sub_00042FB0.md`; Issue #4800. Xbox link, post-link XBE diff, runtime, and gameplay remain pending. The live dashboard and PR remain unchanged until all 100 functions are reconciled.


### Count reconciliation — `sub_00030D70` / Issue #4741

The function's existing lot 82 evidence had completed Ghidra boundary and relationship review, XBE raw/derived PE/split byte equality for 90/90 span bytes, clean MSVC x86 compilation, and 100% ObjDiff 3.8.2 against the named candidate. The dashboard exact-function map did not contain this ID, and it is distinct from the 92 functions previously counted. This corrects the supported lot 82 checkpoint from 92/100 to 93/100; no new byte reconstruction was needed. Evidence: `reconstructions/evidence/sub_00030D70.md`; count correction recorded on Issue #4741. Semantic source/ABI, Xbox link, post-link XBE diff, runtime, and gameplay remain pending. The live dashboard and PR remain unchanged until all 100 functions are reconciled.


### New post-checkpoint append — `sub_00031370` / Issue #4746

The live dashboard candidate was unmatched and absent from the prior exactification map. Ghidra 12.1.3 confirms a 276-byte body across two ranges within a 279-byte span; the 3-byte gap is jump-skipped alignment. Caller/callee coverage is complete: no callers, and direct callees `sub_000331B0` and `sub_000816E0` have local source. Fresh REA, original XBE raw, derived PE, and split bytes agree 279/279. MSVC x86 compiled without diagnostics; ObjDiff 3.8.2 reports 100% against the named candidate, with identical compiled/candidate `.text$mn` sections and zero relocations. This advances the supported lot 82 count from 93/100 to 94/100. Evidence: `reconstructions/evidence/sub_00031370.md`; Issue #4746. Semantic C/ABI, Xbox link, post-link XBE diff, runtime, and gameplay remain pending. The live dashboard and PR remain unchanged until all 100 functions are reconciled.


### New post-checkpoint append — `sub_0002A030` / Issue #4719

The dashboard candidate is unmatched and absent from the prior exactification map. Ghidra 12.1.3 confirms a 2,938-byte body across two ranges in a 2,947-byte span; the 9-byte gap is jump-skipped alignment. Caller/callee coverage is complete, with caller `sub_0002DF30` and callees `sub_0026B370`, `sub_0026E5E0`, and `sub_0026E860`. Fresh REA, original XBE raw, derived PE, and split bytes agree 2,947/2,947. MSVC x86 compiled without diagnostics; ObjDiff 3.8.2 reports 100% against the named candidate, with identical compiled/candidate `.text$mn` sections and zero relocations. This advances the supported lot 82 count from 94/100 to 95/100. Evidence: `reconstructions/evidence/sub_0002A030.md`; Issue #4719. Semantic C/ABI, Xbox link, post-link XBE diff, runtime, and gameplay remain pending. The live dashboard and PR remain unchanged until all 100 functions are reconciled.


### Three unmatched candidate reconciliations — `sub_00013C70`, `sub_00014510`, `sub_00014650`

All three candidates were `unmatched` in the current dashboard and absent from the exactification map. Their existing Ghidra 12.1.3 evidence records complete direct relationships and confirmed function boundaries. Fresh local MSVC x86 builds match the XBE raw spans and named candidate `.text$mn` sections exactly: 61/61, 64/64, and 140/140 bytes. ObjDiff 3.8.2 reports 100% for all three; generated reports are stored beside their evidence files. This advances lot 82 from 95/100 to 98/100. Evidence and Issues: `reconstructions/evidence/sub_00013C70.md` / #8590, `sub_00014510.md` / #8591, and `sub_00014650.md` / #8592. These are byte emitters; semantic C/ABI, Xbox link, post-link XBE diff, runtime, and gameplay remain pending. The live dashboard and PR remain unchanged until all 100 functions are reconciled.


### New post-checkpoint append — `sub_00018910` / Issue #4623

This unmatched dashboard candidate was absent from the exactification map. Ghidra 12.1.3 confirms a 34-byte body in two ranges within a 41-byte span; the 7-byte gap is jump-skipped alignment. Caller/callee coverage is complete (`sub_000F8A90` → `sub_00018910` → `sub_000E6E10`). The canonical manual source compiles with MSVC x86; compiled bytes match the XBE raw span and ObjDiff 3.8.2 reports 100% against the named candidate. This advances lot 82 from 98/100 to 99/100. Evidence: `reconstructions/evidence/sub_00018910.md` and `.objdiff.json`. Semantic C/ABI, Xbox link, post-link XBE diff, runtime, and gameplay remain pending. The live dashboard and PR remain unchanged until all 100 functions are reconciled.


### Final function — `sub_00016CE0` / Issue #157

The candidate is unmatched in the live dashboard and absent from the exactification map. Fresh Ghidra 12.1.3 confirms one contiguous 95-byte body and complete caller/callee coverage (caller `sub_001A7930`, no callees). Fresh REA, XBE raw, derived PE, split, compiled MSVC x86 section, and named candidate section match 95/95 bytes; ObjDiff 3.8.2 reports 100%. This advances lot 82 from 99/100 to 100/100. Evidence: `reconstructions/evidence/sub_00016CE0.md` and `.objdiff.json`; Issue #157. Xbox link, post-link XBE diff, runtime, and gameplay remain pending. PR #8604 is merged; the live dashboard refresh was verified after its Pages workflow.

## Lot 83 — merged in PR #8604 (2026-10-28)

Lot 83 selects 100 distinct dashboard candidates totaling 23,373 bytes. Fresh Ghidra 12.1.3 boundary and relationship checks and REA complete-byte reads passed for all 100. Each body matches the original XBE, derived PE, XboxRecomp split, named candidate COFF section, and freshly compiled MSVC 19.51.36260 x86 section byte for byte, with zero relocations; ObjDiff 3.8.2 reports 100.00% symbol and section similarity for all 100. The local dashboard snapshot now reports 8,626 exact candidates / 1,651,157 bytes (71.87831388%) across the incomplete 13,676-candidate inventory; fuzzy ObjDiff remains 0.66778016%. The 100 records are sanitized exact-byte candidates and do not establish semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, or gameplay. `reconstructions/validation-index.json` remains unchanged, so maintainer-accepted semantic reconstructions remain a separate count.

## Lot 84 — merged in PR #8605 (2026-10-28)

Lot 84 revalidates 100 distinct functions (29,964 bytes); these IDs do not overlap Lot 83 and already appear in the dashboard exact-candidate snapshot. Every function has fresh Ghidra boundary/call relationship evidence, a complete REA read, byte equality against XBE raw, derived PE, XboxRecomp split, named candidate object, and fresh MSVC x86 object, plus 100.00% ObjDiff 3.8.2. The exact-candidate total remains 8,626 because this lot revalidates existing exact entries; no duplicate IDs were added. This count remains separate from the 346-function queue, semantic acceptance, Xbox linking, and runtime status. Per-function public evidence is in `reconstructions/evidence/`.


## Lot 85 — merged in PR #8606 (2026-10-28)

Lot 85 revalidates 100 distinct functions (18,708 bytes). All 100 were category `exact` in the current dashboard candidate snapshot and have fresh Ghidra 12.1.3 boundary/relationship records, complete REA reads, exact bytes across XBE raw, derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 objects. ObjDiff 3.8.2 reports 100.00% for all symbols and `.text$mn` sections; candidate and compiled objects have zero relocations. The dashboard snapshot therefore remains at 8,626 exact candidates / 1,651,157 code bytes (71.87831388% of 2,297,156 candidate bytes); no duplicate function IDs were added. These are static byte-emitter results, not semantic C, ABI, Xbox link, post-link XBE, runtime, or gameplay proof. Per-function evidence is in `reconstructions/evidence/`.


## Lot 86 — merged in PR #8607 (2026-10-28)

Lot 86 revalidates 100 distinct functions (10,297 bytes), with no overlap against Lots 83–85. All 100 are category `exact` in the current dashboard snapshot and have fresh Ghidra 12.1.3 boundary/relationship records, complete REA reads, byte equality across XBE raw, derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 objects. ObjDiff 3.8.2 reports 100.00% for all symbols and `.text$mn` sections; candidate and compiled objects have zero relocations. The dashboard remains at 8,626 exact candidates / 1,651,157 code bytes (71.87831388% of 2,297,156 candidate bytes); no duplicate IDs were added. These are static byte-emitter results, not semantic C, ABI, Xbox link, post-link XBE, runtime, or gameplay proof. Per-function evidence is in `reconstructions/evidence/`.


## Lot 87 — merged in PR #8608 (2026-10-28)

Lot 87 validates 100 distinct functions (14,325 bytes), with no overlap against Lots 83–86. All 100 are category `exact` in the current dashboard snapshot and have fresh Ghidra 12.1.3 boundary/relationship records, complete REA reads, byte equality across XBE raw, derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 objects. ObjDiff 3.8.2 reports 100.00% for all symbols and `.text$mn` sections; candidate and compiled objects have zero relocations. The dashboard remains at 8,626 exact candidates / 1,651,157 code bytes (71.87831388% of 2,297,156 candidate bytes); no duplicate IDs were added. These are static byte-emitter results, not semantic C, ABI, Xbox link, post-link XBE, runtime, or gameplay proof. Per-function evidence is in `reconstructions/evidence/`.


## Lot 88 — merged in PR #8709 (2026-10-28)

Lot 88 validates 100 distinct functions (17,438 bytes), with no overlap against Lots 83–87. All 100 are category `exact` in the current dashboard snapshot and have fresh Ghidra 12.1.3 boundary/relationship records, complete REA reads, byte equality across XBE raw, derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 objects. ObjDiff 3.8.2 reports 100.00% for all symbols and `.text$mn` sections; candidate and compiled objects have zero relocations. The dashboard remains at 8,626 exact candidates / 1,651,157 code bytes (71.87831388% of 2,297,156 candidate bytes); all 100 function records were already present in the dashboard exactification index, so no duplicate entries were added. These are static byte-emitter results, not semantic C, ABI, Xbox link, post-link XBE, runtime, or gameplay proof. Per-function evidence is in `reconstructions/evidence/`.


## Lot 89 — validation complete (2026-10-28)

Lot 89 validates 100 distinct functions (16,171 bytes), with no overlap against Lots 83–88. All 100 are category `exact` in the current dashboard snapshot and have fresh Ghidra 12.1.3 boundary/relationship records, complete REA reads, byte equality across XBE raw, derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 objects. ObjDiff 3.8.2 reports 100.00% for all symbols and `.text$mn` sections; candidate and compiled objects have zero relocations. The dashboard remains at 8,626 exact candidates / 1,651,157 code bytes (71.87831388% of 2,297,156 candidate bytes); no duplicate IDs were added. These are static byte-emitter results, not semantic C, ABI, Xbox link, post-link XBE, runtime, or gameplay proof. Per-function evidence is in `reconstructions/evidence/`.


## Lot 90 — validation complete (2026-10-28)

Lot 90 validates 100 distinct functions (6,389 bytes), with no overlap against Lots 83–89. All 100 are category `exact` in the current dashboard snapshot and have fresh Ghidra 12.1.3 boundary/relationship records, complete REA reads, byte equality across XBE raw, derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 objects. ObjDiff 3.8.2 reports 100.00% for all symbols and `.text$mn` sections; candidate and compiled objects have zero relocations. The dashboard remains at 8,626 exact candidates / 1,651,157 code bytes (71.87831388% of 2,297,156 candidate bytes); the two functions missing from the exactification index were added to it; candidate exact totals remain unchanged. These are static byte-emitter results, not semantic C, ABI, Xbox link, post-link XBE, runtime, or gameplay proof. Per-function evidence is in `reconstructions/evidence/`.


## Lot 91 — validation complete (2026-10-28)

Lot 91 validates 100 distinct functions (12,019 bytes), with no overlap against Lots 83–90. All 100 are category `exact` in the current dashboard snapshot and have fresh Ghidra 12.1.3 boundary/relationship records, complete REA reads, byte equality across XBE raw, derived PE, XboxRecomp split, named candidate COFF, and fresh MSVC 19.51.36260 x86 objects. ObjDiff 3.8.2 reports 100.00% for all symbols and `.text$mn` sections; candidate and compiled objects have zero relocations. The dashboard remains at 8,626 exact candidates / 1,651,157 code bytes (71.87831388% of 2,297,156 candidate bytes); all 100 functions were already present in the dashboard exactification index, so the candidate totals remain unchanged. These are static byte-emitter results, not semantic C, ABI, Xbox link, post-link XBE, runtime, or gameplay proof. Per-function evidence is in `reconstructions/evidence/`.
