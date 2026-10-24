# sub_001F5CA0

- Function task: [#3026](https://github.com/soldieg/ReBLACK-XBOX/issues/3026).
- Batch: 29 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x001F5CA0â€“0x001F5D10 inclusive, contiguous, 113 bytes; evidence `ev_3af19e64623ae5947569b1cd3ef6d6d90cb6b487ea7dc57fd78ff6829e046d41`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001F5CA0`, 113 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (113/113 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 113 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `afafb04e2606800dd6e622fb37ae12bb0ac095b57b4297d5f75ba3b8e8034205`; candidate object SHA-256: `22e5c9b877363ccb41de99f98f90af30a9fdaa75ff371a04f3fb9d364743d79e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
