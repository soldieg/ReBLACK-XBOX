# sub_0021BBC7

- Function task: [#4468](https://github.com/soldieg/ReBLACK-XBOX/issues/4468).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021BBC7-0x0021BC00 inclusive, contiguous, 58 bytes; evidence `ev_258726fd55f4a0451dfd11f10b3c81d1832e44f94a3d5e6fead0dc508e25914c`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021BBC7`, 58 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (58/58 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 58 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8f74397d47ff286ddcdf86584bc2dd1277c9f471397c90cb14ad6fa1af853657`; candidate object SHA-256: `faaa7ea2950dbada72b47cb7d24e4a9cdbf98edd9191cde5cda6db28ac093cbf`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
