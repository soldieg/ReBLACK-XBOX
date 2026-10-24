# sub_001F4ED0

- Function task: [#3020](https://github.com/soldieg/ReBLACK-XBOX/issues/3020).
- Batch: 29 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x001F4ED0â€“0x001F4F35 inclusive, contiguous, 102 bytes; evidence `ev_5009e9a7142182ed29f42f15db2ad898329a353b7a47955ae2412545ea421fac`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001F4ED0`, 102 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (102/102 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 102 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `abb0ad209bfde47a55f831851ef4f4dc761c92bdaf1a9a92c22677916abc25af`; candidate object SHA-256: `9ade8dd7e1b60532d17abba1c1680454f69d241e6154999aa7a14e37c123e195`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
