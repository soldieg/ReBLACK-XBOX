# sub_001CF2B0

- Function task: [#2921](https://github.com/soldieg/ReBLACK-XBOX/issues/2921).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CF2B0â€“0x001CF319 inclusive, contiguous, 106 bytes; evidence `ev_b30b4c18e4571f46364819c7248976391ec25badf06a46aaa6e6247f0d8b6b8e`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CF2B0`, 106 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (106/106 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 106 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e9224408239048ebe2e20617d3d8c7f2f715b18717f812e60fbe8c4f70333f29`; candidate object SHA-256: `303aecb660f811791c48245f5f20303a7db3644d2ac55274a622133766aae603`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
