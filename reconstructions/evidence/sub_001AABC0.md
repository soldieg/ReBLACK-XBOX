# sub_001AABC0

- Function task: [#2720](https://github.com/soldieg/ReBLACK-XBOX/issues/2720).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AABC0–0x001AAD44 inclusive, contiguous, 389 bytes; evidence `ev_bc01a30b6eaa56b5e4a302a69ab67522c18946ac96ab72d59a58b4088458a64d`.
- Static Ghidra references: 0 caller sites, 8 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AABC0`, 389 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (389/389 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 389 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `b0f8470e5b570b37b483b1936c1901e9da26388dc270df36bacdf29b073365eb`; candidate object SHA-256: `b6eb2239884bdb30a01c974cbb41e2b3371652da158b95578bae0e318a3a0c4c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
