# sub_0004AFA0

- Function task: [#3771](https://github.com/soldieg/ReBLACK-XBOX/issues/3771).
- Batch: 36 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x0004AFA0-0x0004AFC4 inclusive, contiguous, 37 bytes; evidence `ev_a2f0a85d2d369d8b5b33056f30b900e444cce69d243b47df1ac1f2281bdbd296`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0004AFA0`, 37 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (37/37 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 37 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9fb1f9201b348e0fec96261b3702d46f405e02ee8cde3f31e87ea3f360e91e40`; candidate object SHA-256: `7de3a89c92776b16e9c9c55f931bbf1f1962d519cc259870f19e7a5fbd9e842e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.

## Lot 96 revalidation — 2026-10-28

- Task: [#3771](https://github.com/soldieg/ReBLACK-XBOX/issues/3771).
- Fresh REA/Ghidra 12.1.3 body: 0x4afa0–0x4afc4 inclusive, contiguous, 37 bytes; analysis evidence `ev_75552bb709fc773ab19305e1df3c6230cd6abfd413be6bea32ec0f83b13ce21b`.
- Fresh REA byte read: complete 37/37 bytes; SHA-256 matches the named candidate; evidence `ev_ead983c485cc438fb3b44d56d8db7e4de56dac9067885fc0d048712dfd31659f`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 0 caller sites, 2 callee sites; unresolved calls: 0. Coverage: complete.
- This candidate was already `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
