# sub_001FBC90

- Function task: [#3081](https://github.com/soldieg/ReBLACK-XBOX/issues/3081).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FBC90â€“0x001FBCD4 inclusive, contiguous, 69 bytes; evidence `ev_c02ab3da81162edc1a9840118a1eae42dabbd6ec3bac519c56416c0426440e41`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FBC90`, 69 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (69/69 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 69 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `693a44e50e709385fa3302c3de1cff8a179f146c34a1b3947c708a97be92c84c`; candidate object SHA-256: `b790c481a310c8064c67e534f3b9356ccd7d808e4bd7ccd4265516c1cc7ee1ba`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
