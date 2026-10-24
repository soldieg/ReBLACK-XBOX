# sub_001AF3C0

- Function task: [#2765](https://github.com/soldieg/ReBLACK-XBOX/issues/2765).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AF3C0–0x001AF429 inclusive, contiguous, 106 bytes; evidence `ev_2ba73ee6be0b4baf79e93a6db664f19386651d03bc8dff9becb88063ece63a29`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AF3C0`, 106 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (106/106 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 106 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e21166443299328047f9045d05de1dcaec7972dcf052b1284f0e692fe3112408`; candidate object SHA-256: `ce40849e85d90b4b6b7fdbc9b60f7ab6280146b388cbac8dae8866fb4e473bca`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
