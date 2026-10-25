# sub_0013EDA0

- Function task: [#4423](https://github.com/soldieg/ReBLACK-XBOX/issues/4423).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0013EDA0-0x0013EDBA inclusive, contiguous, 27 bytes; evidence `ev_7b3fc242f79018c291008583d6d69381a55a83732865ea58ff3a540b13c6e61e`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0013EDA0`, 27 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (27/27 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 27 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6fce6d1008e4da342fb4d776a95121b26ce4f0a70a38283e2a47a3a04fa7e204`; candidate object SHA-256: `62cdaf9b2d8885d64e019c329b7b4a489047f5950b90b610870d0be03a32a1d6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
