# sub_001A4CA0

- Function task: [#5160](https://github.com/soldieg/ReBLACK-XBOX/issues/5160).
- Batch: 49 (current 100-lot run: 49/100; 100 functions).
- Ghidra 12.1.3 body: 0x001A4CA0-0x001A4E49 inclusive, contiguous, 426 bytes; evidence `ev_d2c3955e7c98e66d22d130612c8f12b1ee0a3ef9e4be3429937f71ba1487de05`.
- Static Ghidra references: 0 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001A4CA0`, 426 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (426/426 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 426 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9dc683724c9da6674c62decd8260790b1181f8eaf452e5309cca2704cef9a4c4`; candidate object SHA-256: `df2ce37f8213d0670421d018861b04622937fa91b6073055bf9ae4d6086fe03b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
