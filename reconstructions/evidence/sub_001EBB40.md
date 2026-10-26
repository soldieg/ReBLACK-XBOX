# sub_001EBB40

- Function task: [#5326](https://github.com/soldieg/ReBLACK-XBOX/issues/5326).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001EBB40-0x001EBC21 inclusive, contiguous, 226 bytes; evidence `ev_c8028ef834bbdb2d44efe9ada53bdec2abe84e4a264c4245d088420ce5025571`.
- Static Ghidra references: 1 caller sites, 10 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001EBB40`, 226 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (226/226 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 226 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d9c04668fabc5d19662b6504b311cccbf0cd96c2bfdfbfa6bbb82b4653950a08`; candidate object SHA-256: `dfc9d0d93fa72bfd55ff6a8a6e33452d0c2200360bd6d60d6f56a9fafff4c5f5`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
