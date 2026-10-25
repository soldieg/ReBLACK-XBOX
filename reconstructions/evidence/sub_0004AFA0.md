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
