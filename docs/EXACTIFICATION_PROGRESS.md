# 346-function exactification queue

**Queue snapshot date:** 2026-10-18
**Dashboard exactification refresh:** 2026-10-26

The 346-function exactification queue remains separate from the 13,676-candidate dashboard snapshot. After lots 62–68 were merged, the dashboard reports 7,126 exact candidates and 1,475,789 exact code bytes out of 2,297,156 (64.24417845%); raw fuzzy ObjDiff remains 0.66778016%. The reviewed ObjDiff report is unchanged. The dashboard reconciles exact records and raw ObjDiff matches by function identity and counts overlaps once. GitHub PR state and `main` ancestry checked on 2026-10-26: code lots 24–68 are merged.

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

The merged candidate map covers code lots 43–68. Every lot contains 100 functions. GitHub API and `main` ancestry were checked on 2026-10-26: lots 43–68 are merged, including lot 67 in PR #7144.

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
Code lots 49–60 are merged. Lot 60’s 100 function records are merged in PR #6350. Lot 61 merged in PR #6450. Lot 54 has 14 unresolved call instructions across 7 functions. Lot 55 has 271 across 99 functions; 99 new sources were added and one existing source preserved, with four C4100 warnings in that preserved source. Lot 56 has 217 unresolved call instructions across 95 functions; it preserves two existing sources. These unresolved destinations remain unknown. Lot 56 has 99 unmatched dashboard candidates and one fuzzy candidate; its 46.48% fuzzy similarity is candidate metadata, separate from ObjDiff.

Lot 59 adds 100 rows totaling 39,782 bytes. All 100 passed static equality, fresh x86 compilation, and ObjDiff at 100.00%, with 100 exact contiguous Ghidra bodies. Ghidra reports 218 computed call sites whose destinations remain unresolved; there are no unresolved direct calls. Four members of one connected callback-table group have ownerless `.rdata` references, so their ABI remains pending. `sub_000E62A0` still lacks the formal REA dossier; its observed initialization path is documented from local Ghidra. The proposed map now reports 5,975 additional exact-byte rows and **6,326 exact candidates / 1,399,052 bytes (60.9037%)** across the incomplete 13,676-candidate snapshot. The raw objdiff report still contributes 29 fuzzy candidates / 0.6678%. These records establish static byte exactness and candidate ObjDiff only; they do not establish semantic C, formal ABI, Xbox linking, post-link XBE equality, runtime, or gameplay. The independent 346-entry accepted-reconstruction queue remains 346/346. The public `validatedReconstructionCount` remains 0; the maintainer-only `reconstructions/validation-index.json` was not changed. These dashboard records establish static byte exactness and candidate ObjDiff only; they do not establish semantic C, formal ABI, Xbox linking, post-link XBE equality, runtime, or gameplay.

To refresh the page, update the sanitized function statuses, run `python tools/decompdev/build_dashboard.py`, review the generated preview, then commit the updated data and page changes. GitHub Actions validates the report and publishes the dashboard from the commit. Detailed C sources, binaries, target bytes, and local evidence remain outside this repository.


Lot 60 contains 100 new candidate records totaling 20,010 bytes. All 100 have exact contiguous Ghidra bodies and byte equality across Ghidra, XBE raw, derived PE, XboxRecomp split, named candidate object, and compiled x86 object. MSVC 19.51.36260 compiled all 100 without warnings; ObjDiff 3.8.2 reports 100.00% for all 100 named candidate symbols. Ghidra reports 224 unresolved computed/indirect call sites and no unresolved direct calls. Twelve ownerless inbound data references are preserved in complete table groups; their ABI meaning remains pending. These records are address-pinned byte emitters, not semantic C or formal ABI recovery. Xbox link, post-link XBE diff, runtime, and gameplay remain pending. The exactification status data now carries 6,075 additional exact-byte records; the refreshed incomplete candidate snapshot reports 6,426 exact candidates / 1,419,062 bytes (61.7747%) and 0.6678% fuzzy ObjDiff candidates. The independent accepted-reconstruction queue and maintainer validation count retain their separate scopes.

Lot 61 adds 100 candidate records totaling 17,909 bytes. All 100 have contiguous Ghidra 12.1.3 bodies matching the XboxRecomp split bodies; all 100 appear by address and size in the 2026-10-26 exact raw-static screen. MSVC 19.51.36260 x86 compiled all 100 without diagnostics, and ObjDiff 3.8.2 reports 100.00% against each named candidate object. Ghidra records 181 unresolved computed/indirect call sites across 95 functions, with no unresolved direct callees, ownerless inbound references, or inbound data references. Each function has an Issue and a sanitized evidence file. These sources are address-pinned byte emitters, not semantic C or formal ABI recovery. Xbox link, post-link XBE diff, runtime, and gameplay remain pending. The merged map carries 6,175 additional exact-byte records and reports 6,526 exact candidates / 1,436,971 bytes (62.55434981%) across the incomplete 13,676-candidate snapshot; fuzzy ObjDiff remains 0.66778016%. The independent accepted-reconstruction queue and maintainer validation count retain their separate scopes; `reconstructions/validation-index.json` is unchanged.


Lot 67 merged in PR #7144 with 100 functions totaling 5,600 bytes. Its merge-triggered ReBLACK Xbox progress dashboard workflow completed successfully, and the public Pages endpoint returned HTTP 200. All 100 have contiguous Ghidra 12.1.3 bodies, and original XBE mapped, derived PE, Ghidra, and XboxRecomp split bytes match. MSVC 19.51.36260 x86 compiled all sources without diagnostics; ObjDiff 3.8.2 reports 100.00% for each named candidate, and candidate/compiled COFF `.text$mn` sections match byte for byte (5,600/5,600 bytes, 0/0 relocations). Ghidra reports 4 unresolved computed/indirect call sites across 4 functions and no unresolved direct calls. These are address-pinned byte emitters, not semantic C or formal ABI reconstructions. Xbox link, post-link XBE diff, runtime, and gameplay remain pending. The latest combined dashboard reports 7,126 exact candidates / 1,475,789 exact bytes (64.24417845%) after lots 62–68; raw fuzzy ObjDiff remains 0.66778016%. `reconstructions/validation-index.json` and the 346-function accepted-reconstruction queue are unchanged.


Lot 68 merged in PR #7245 with 100 functions totaling 5,129 bytes. All 100 have contiguous Ghidra 12.1.3 bodies, and original XBE mapped, derived PE, Ghidra, and XboxRecomp split bytes match. MSVC 19.51.36260 x86 compiled all sources without diagnostics; ObjDiff 3.8.2 reports 100.00% for each named candidate, and candidate/compiled COFF `.text$mn` sections match byte for byte (5,129/5,129 bytes, 0/0 relocations). Ghidra reports 3 unresolved computed/indirect call sites across 3 functions and no unresolved direct calls. These are address-pinned byte emitters, not semantic C or formal ABI reconstructions. Xbox link, post-link XBE diff, runtime, and gameplay remain pending. The combined dashboard now reports 7,126 exact candidates / 1,475,789 exact bytes (64.24417845%) after lots 62–68; raw fuzzy ObjDiff remains 0.66778016%. `reconstructions/validation-index.json` and the 346-function accepted-reconstruction queue are unchanged.

## Open 100-function lot proposals

GitHub status checked on 2026-10-26: lots 69, 70, and 71 remain open and mergeable. Each branch is a separate dashboard proposal; none is part of `main` until merged.

| Lot | PR | State | Functions | Bytes | ObjDiff 100% | Unresolved computed calls |
| --- | --- | --- | ---: | ---: | ---: | ---: |
| 69 | [#7346](https://github.com/soldieg/ReBLACK-XBOX/pull/7346) | open, mergeable | 100 | 5,763 | 100/100 | 8 |
| 70 | [#7431](https://github.com/soldieg/ReBLACK-XBOX/pull/7431) | open, mergeable | 100 | 6,164 | 100/100 | 7 |
| 71 | [#7453](https://github.com/soldieg/ReBLACK-XBOX/pull/7453) | open, mergeable | 100 | 12,097 | 100/100 | 37 |
| 72 | pending | prepared in this branch | 100 | 8,585 | 100/100 | 62 |

Lot 72 has 100 contiguous Ghidra 12.1.3 bodies totaling 8,585 bytes and 2,856 instructions. Original XBE mapped bytes, derived PE mapped bytes, Ghidra body, and XboxRecomp split match for all 100. MSVC 19.51.36260 x86 compiled all sources without diagnostics; ObjDiff 3.8.2 reports 100.00% against each named candidate, and candidate/compiled COFF `.text$mn` sections match byte-for-byte (8,585/8,585 bytes, 0/0 relocations). Ghidra reports 62 unresolved computed/indirect call sites and no unresolved direct calls. The sources are address-pinned byte emitters, not semantic C or formal ABI reconstructions. Xbox link, post-link XBE diff, runtime, and gameplay remain pending. The lot 72 branch preview reports 7,226 exact candidates / 1,484,374 exact bytes (64.61790144%) across the incomplete 13,676-candidate snapshot; raw fuzzy ObjDiff remains 0.66778016%. This proposal includes only lot 72 on top of merged main through lot 68; it does not combine the open lots 69–71. Nine initially screened targets were excluded because their direct callees have no source reconstruction in public main; their Issues remain open. The maintainer-only validation index and 346-function accepted-reconstruction queue are unchanged.
