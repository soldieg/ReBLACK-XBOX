# sub_001FFB90

- Function task: [#3104](https://github.com/soldieg/ReBLACK-XBOX/issues/3104).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FFB90â€“0x001FFBDF inclusive, contiguous, 80 bytes; evidence `ev_f0b915262c35056475fab3656717986de65beff559b0b5917c7093934e9d2985`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FFB90`, 80 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (80/80 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 80 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0c34c57aaad022c2adbf0c04e63a92e8d47f99b748b32020bc9df93c71f06b30`; candidate object SHA-256: `1c773c5790eadf10dbb83066c8c47df6629ab20a9eca032104f657644698fdde`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
