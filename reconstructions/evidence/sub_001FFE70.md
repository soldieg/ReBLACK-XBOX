# sub_001FFE70

- Function task: [#3107](https://github.com/soldieg/ReBLACK-XBOX/issues/3107).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FFE70â€“0x00200074 inclusive, contiguous, 517 bytes; evidence `ev_7828eb0dbaeca1b861807428a715a333dce0f43fc9bbb49e1253d8c082e04c60`.
- Static Ghidra references: 0 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FFE70`, 517 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (517/517 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 517 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `efd51d4eb21cec4788196b0e41c5677f106c2a550b218bdff386b9088275dd16`; candidate object SHA-256: `73147a1072c7f36e4de5fc106d7d58e73479f97a24ce0054a22b5f4feabc6738`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
