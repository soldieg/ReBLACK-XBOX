# sub_001CACE0

- Function task: [#2882](https://github.com/soldieg/ReBLACK-XBOX/issues/2882).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CACE0â€“0x001CAD92 inclusive, contiguous, 179 bytes; evidence `ev_f32b6ab5a37eb9206a88ec681c0b7ba482a27bee1be0e57c55985b4c0c2d1190`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CACE0`, 179 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (179/179 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 179 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `09749e844c70926c81f9081acb8ab01378cfe158585baaaf819bbc1a0e815cba`; candidate object SHA-256: `e1d31763fb2cd500565be824598d0b1219a75a28ce677c930efb0f09332b2e80`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
