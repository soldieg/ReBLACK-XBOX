# sub_0009DC3E

- Function task: [#4019](https://github.com/soldieg/ReBLACK-XBOX/issues/4019).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009DC3E-0x0009DD4C inclusive, contiguous, 271 bytes; evidence `ev_d1a3735a458943c20d1bd8a71f7e81d8d0b8f256e9d3442f3880db693ce342b3`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009DC3E`, 271 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (271/271 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 271 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `57f395d4536a363df46157c4743130c7ab9e89aad1b7b26b4864f60342f0b274`; candidate object SHA-256: `0f1ff4b5f7668ed95db50a98cfc77307874bfe8fcc35b0b1291436e7b1be511c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 99 revalidation — 2026-10-28

- Task: [#4019](https://github.com/soldieg/ReBLACK-XBOX/issues/4019).
- Fresh REA/Ghidra 12.1.3 body: 0x9dc3e–0x9dd4c inclusive, contiguous, 271 bytes; analysis evidence `ev_d1a3735a458943c20d1bd8a71f7e81d8d0b8f256e9d3442f3880db693ce342b3`.
- Fresh REA byte read: complete 271/271 bytes; SHA-256 matches the named candidate; evidence `ev_c6da772bcbf3f395d4f18e991abdabf21d75a6e15e53b8bc67df1127c3545503`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 3 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
