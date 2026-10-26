# sub_001C1AC0

- Function task: [#2813](https://github.com/soldieg/ReBLACK-XBOX/issues/2813).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001C1AC0–0x001C1AED inclusive, contiguous, 46 bytes; evidence `ev_935b8d8938d1352cd8c143dba9e41e7354704338d7d1776c71ad83e15e43831c`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001C1AC0`, 46 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (46/46 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 46 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `5a6adb340c0b73945a33bb257c26702ea31cc2d89428d3c802e5d40fb62277cb`; candidate object SHA-256: `338e52e2e147ccec1d3dfe1f589b4abc0be572a5673c9ccb7a193b556ece9398`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
