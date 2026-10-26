# sub_0027EFBD

- Function task: [#3520](https://github.com/soldieg/ReBLACK-XBOX/issues/3520).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027EFBDâ€“0x0027EFC6 inclusive, contiguous, 10 bytes; evidence `ev_96c12e36853075c485241b3a61bf7bd4829e92e8acf6cda60d2bac971cf36db9`.
- Static Ghidra references: 3 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027EFBD`, 10 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (10/10 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 10 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `bbdd851aba6fd7fcd342e4c447e8925a2581fe8e995a9711db1899589ce6bb73`; candidate object SHA-256: `59a9846eb94e8e121427d13a87c38eaa4c15a84243ad5e3d7814172958bf1528`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
