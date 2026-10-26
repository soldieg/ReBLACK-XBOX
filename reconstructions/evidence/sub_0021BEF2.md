# sub_0021BEF2

- Function task: [#4474](https://github.com/soldieg/ReBLACK-XBOX/issues/4474).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021BEF2-0x0021BF10 inclusive, contiguous, 31 bytes; evidence `ev_80921a85dd70c0e1af88565e7bc4db589a8a1a5b1bfe64754004b1d34bfe5494`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021BEF2`, 31 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (31/31 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 31 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e86bf9faca4f0d1128b4ad0fd678672dc3b476c16111022b07a9eede897f7551`; candidate object SHA-256: `fab10233bce683bd1d32d9a24c1eac1c64fdc2b176c883ea41d40234679797ec`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
