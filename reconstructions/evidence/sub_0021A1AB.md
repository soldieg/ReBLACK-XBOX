# sub_0021A1AB

- Function task: [#3246](https://github.com/soldieg/ReBLACK-XBOX/issues/3246).
- Batch: 31 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x0021A1ABâ€“0x0021A1CE inclusive, contiguous, 36 bytes; evidence `ev_c9d79c0f0d82c108527b190c118ccb48733b28cc412f653c221f44634a35df81`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021A1AB`, 36 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (36/36 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 36 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `61eb487a29004ddbb337209eaccfde4b031a449a3f3611b96fc570bb3e2d8149`; candidate object SHA-256: `5afdef94e208ae3d19f49b7dd82ecd5cbead31c8b6da34f97c6c5579490c2306`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
