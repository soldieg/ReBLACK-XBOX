# sub_001AA7A0

- Function task: [#2713](https://github.com/soldieg/ReBLACK-XBOX/issues/2713).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AA7A0–0x001AA913 inclusive, contiguous, 372 bytes; evidence `ev_67b1514cc92fb21d8bfbe48ef1e95f9f219fdc73db8c7bbbae7391b3df393da6`.
- Static Ghidra references: 2 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AA7A0`, 372 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (372/372 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 372 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4f5debcf95f0f88e99eea72fe7e4a6b9c1e4d3759a2812ead039ba7f3b13ad00`; candidate object SHA-256: `d268feafbc8a6b1c268ea34ae0c2a114e3c816e8a9b53dcd58a0b9940a86ae39`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
