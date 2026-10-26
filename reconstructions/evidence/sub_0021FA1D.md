# sub_0021FA1D

- Function task: [#5431](https://github.com/soldieg/ReBLACK-XBOX/issues/5431).
- Batch: 52 (current 100-lot run: 52/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021FA1D-0x0021FB29 inclusive, contiguous, 269 bytes; evidence `ev_f8fb974d3876e537b6cfa59e41d8ee6bbea08f0eed6476cdb16ec46b8582b713`.
- Static Ghidra references: 1 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021FA1D`, 269 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (269/269 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 269 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `89840435263c06ba1cbcc0fd58c4344e65f65f32b38f2bc6212fe36bf31a3355`; candidate object SHA-256: `9294d8d29807fd1c0059ee996fcfc9bbabcfdd8aacb1d3f011758a8a7cd30ca8`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
