# sub_001ABB70

- Function task: [#2734](https://github.com/soldieg/ReBLACK-XBOX/issues/2734).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001ABB70–0x001ABBB8 inclusive, contiguous, 73 bytes; evidence `ev_dd61bfe0a7d08580cc31ca8d49538348f246f1c5c13839bdb7cc908eed0e5838`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001ABB70`, 73 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (73/73 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 73 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c92d87bfa24d34d43c54359426ba66b6241a40cfb681e3e724063fcd0da082b1`; candidate object SHA-256: `855b7a7e3ea3f4bce779377e68d056bbd23f351ec74991212f996df48359dd99`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
