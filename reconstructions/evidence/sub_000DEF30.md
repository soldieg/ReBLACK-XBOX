# sub_000DEF30

- Function task: [#4362](https://github.com/soldieg/ReBLACK-XBOX/issues/4362).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DEF30-0x000DF073 inclusive, contiguous, 324 bytes; evidence `ev_001a27d2cafbad16212cf07e27c2a05a88ccff7f8c82bc73d8aa74d5d41969d4`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DEF30`, 324 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (324/324 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 324 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3cf9abf8073b03db23dbb680450dea88601db6d41d688bd3d53503fbd231f66f`; candidate object SHA-256: `2652da20fed8fcdc11f0bd3b31f70262fa0f90d236eb79de3d2d6bc13c616f1c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
