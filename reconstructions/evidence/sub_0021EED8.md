# sub_0021EED8

- Function task: [#5416](https://github.com/soldieg/ReBLACK-XBOX/issues/5416).
- Batch: 52 (current 100-lot run: 52/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021EED8-0x0021EF5B inclusive, contiguous, 132 bytes; evidence `ev_86ed32fe17be8e0ac1198bee7b46f2226b0dee3073cfbb6904a6edbb22a974f9`.
- Static Ghidra references: 2 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021EED8`, 132 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (132/132 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 132 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f34ddfa4d8129a400ccf0c38e83d71e48aca00e32833f5f8f7575d4c23df2955`; candidate object SHA-256: `0fee0361f6a5673192e73d3d74733ac4e5c24ab6146242b363789da191591029`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
