# sub_0027EFC7

- Function task: [#3521](https://github.com/soldieg/ReBLACK-XBOX/issues/3521).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027EFC7â€“0x0027F034 inclusive, contiguous, 110 bytes; evidence `ev_1ea974b4f9a154d458ef0f47b4009914db422425f938f6d5c6f432f07eb22c42`.
- Static Ghidra references: 3 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027EFC7`, 110 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (110/110 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 110 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9fa3a781fcd8e24879d2e7b82360c7f9cb40e3edd52ff12b353966fce135c278`; candidate object SHA-256: `e1dc450668d71f6cfe41692b42307560287c60ac0bf58caf4481891b97f5d43e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
