# sub_000A4FF5

- Function task: [#4090](https://github.com/soldieg/ReBLACK-XBOX/issues/4090).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A4FF5-0x000A5000 inclusive, contiguous, 12 bytes; evidence `ev_09e6069894519157ccbb4fdcbac955b874b59ff46fea2027ebd5b7e3d1a0bc4c`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A4FF5`, 12 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (12/12 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 12 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8d119b39276ce90a63d466c15f2c785a0ffaa969b03baa0317a428e6efc1ae24`; candidate object SHA-256: `4429ed09ac261887c7974888b79c4bec36de8895fa476c2dbcf4dde67ae98c01`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 99 revalidation — 2026-10-28

- Task: [#4090](https://github.com/soldieg/ReBLACK-XBOX/issues/4090).
- Fresh REA/Ghidra 12.1.3 body: 0xa4ff5–0xa5000 inclusive, contiguous, 12 bytes; analysis evidence `ev_09e6069894519157ccbb4fdcbac955b874b59ff46fea2027ebd5b7e3d1a0bc4c`.
- Fresh REA byte read: complete 12/12 bytes; SHA-256 matches the named candidate; evidence `ev_13e3f18e225e6327bf2b1d0e5eafcb383c635d292c2e2e797b7ca8620edf856f`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 1 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
