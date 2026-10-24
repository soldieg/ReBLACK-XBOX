# sub_0026DFF0

- Function task: [#3419](https://github.com/soldieg/ReBLACK-XBOX/issues/3419).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0026DFF0â€“0x0026E05E inclusive, contiguous, 111 bytes; evidence `ev_78de6167518ffa6c258a629053e09e00478ccffa73495f640888b9205bb52c87`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0026DFF0`, 111 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (111/111 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 111 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0fbf1cfcd795ffacc3668827ba9435889eea144e78409248b8b19d4c0d22e9ef`; candidate object SHA-256: `c1cbee6b8a38bd2f2e265fce044824ce676667c5793966a696e10dc304b9161d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
