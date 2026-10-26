# sub_001BDE80

- Function task: [#2797](https://github.com/soldieg/ReBLACK-XBOX/issues/2797).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001BDE80–0x001BDF2D inclusive, contiguous, 174 bytes; evidence `ev_facf925056958c8f3054ee197a08690273dff293e6e0c033eb89c8ea1d4f4772`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001BDE80`, 174 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (174/174 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 174 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `697f048d9eafa01a5c8d2b29ef49afce912e7ad38b38fd7dbe1a3e42d67d85ed`; candidate object SHA-256: `9c10c6fa923427cb1ca7120a0048287296cba5ecefe0750ab2f8d983265fb18f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
