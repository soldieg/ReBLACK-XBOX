# sub_000AAD5A

- Function task: [#4155](https://github.com/soldieg/ReBLACK-XBOX/issues/4155).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000AAD5A-0x000AADDA inclusive, contiguous, 129 bytes; evidence `ev_22ac177b1f490a7e7419ac7327580686fafd03b580cd09bc1451f8a676c4fc42`.
- Static Ghidra references: 1 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000AAD5A`, 129 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (129/129 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 129 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ca1453e94d13588cc9a01988e91f10b0dc898a9bf6b7f4c6bd555d6b67d85e62`; candidate object SHA-256: `703eb9ea183ae0bc9bfff595a8b6902f2a66ff9760ce848156357cff36a622c3`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 100 revalidation — 2026-10-28

- Task: [#4155](https://github.com/soldieg/ReBLACK-XBOX/issues/4155).
- Fresh REA/Ghidra 12.1.3 body: 0xaad5a–0xaadda inclusive, contiguous, 129 bytes; analysis evidence `ev_22ac177b1f490a7e7419ac7327580686fafd03b580cd09bc1451f8a676c4fc42`.
- Fresh REA byte read: complete 129/129 bytes; SHA-256 matches the named candidate; evidence `ev_df3fd7045b7256776a893901dd2d4c9a1bbe17b558380a374e946208c5650d90`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 5 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
