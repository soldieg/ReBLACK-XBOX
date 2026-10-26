# sub_0002ABE0

- Function task: [#3693](https://github.com/soldieg/ReBLACK-XBOX/issues/3693).
- Batch: 36 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x0002ABE0-0x0002ABF9 inclusive, contiguous, 26 bytes; evidence `ev_3c9de1485e8959eeebd6f6d07e0175b93628759e7e370181cc4b4d7268d2b4d6`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0002ABE0`, 26 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (26/26 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 26 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2afdde49dec4c19235a19c12d0e74cb270c720325944eba93979dee181523cba`; candidate object SHA-256: `0b1e6d8ce2ade4ade57707538525537048ba31c94bbc65b2c841734d3cbacba2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
