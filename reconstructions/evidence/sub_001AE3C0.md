# sub_001AE3C0

- Function task: [#2754](https://github.com/soldieg/ReBLACK-XBOX/issues/2754).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AE3C0–0x001AE407 inclusive, contiguous, 72 bytes; evidence `ev_dd18022fc909e8163cd4c49ec5effc2846619c5e27fb118793929c6e7c98cc96`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AE3C0`, 72 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (72/72 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 72 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2f0272654130284d473530ddc1876f6989e58cb1b6ce7fef64888ca1f9a8c7cd`; candidate object SHA-256: `e75cfa2d6215bde8457756c0b2c6e186b557a171a8583dd6f09d1c366c5f39dc`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
