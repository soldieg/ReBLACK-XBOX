# sub_001A4BB0

- Function task: [#5159](https://github.com/soldieg/ReBLACK-XBOX/issues/5159).
- Batch: 49 (current 100-lot run: 49/100; 100 functions).
- Ghidra 12.1.3 body: 0x001A4BB0-0x001A4C96 inclusive, contiguous, 231 bytes; evidence `ev_1a7cfb9f3c5de12db15315e085d6227364e4e2c641ef61a7c0308c200ead069f`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001A4BB0`, 231 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (231/231 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 231 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e14cbf37df94023e7d0e42372665d85b6189fdc41377eb14f7ca6bd65b020fb7`; candidate object SHA-256: `cdfc80d020178858d3179b8dc4fc29fb3b5348f7925f4620a9c62c4e51cbc635`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
