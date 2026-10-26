# sub_001EDBC0

- Function task: [#5328](https://github.com/soldieg/ReBLACK-XBOX/issues/5328).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001EDBC0-0x001EDC1D inclusive, contiguous, 94 bytes; evidence `ev_d04fa7f83f029176a9972284d8ef65a58a84648867b27bc72f2cff559ffe761d`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001EDBC0`, 94 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (94/94 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 94 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8a8b7ae4fdab20319f12c2ebbb963a56cff3e35b50312ffd554d3adab37895ad`; candidate object SHA-256: `3c8760d5d890aed47db10f8ceac7a36f8e385bef3630f1ef3b97f66c38b5749a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
