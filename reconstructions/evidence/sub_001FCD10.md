# sub_001FCD10

- Function task: [#3091](https://github.com/soldieg/ReBLACK-XBOX/issues/3091).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FCD10â€“0x001FCE90 inclusive, contiguous, 385 bytes; evidence `ev_40b538f4d3fb6b686f1b176b139574ef65a7b907c28e48a2fa1a39100ffcad28`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FCD10`, 385 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (385/385 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 385 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `1eb2c24a7f828b1f51ff2ca2da8b19ec287800fee71e0d1c32ed4c1ee109fd80`; candidate object SHA-256: `8361a4daf02dc3210ba2401930d0a001e282c43d4db1da0ed7d53e5bb7be2c80`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
