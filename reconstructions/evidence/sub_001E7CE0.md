# sub_001E7CE0

- Function task: [#5314](https://github.com/soldieg/ReBLACK-XBOX/issues/5314).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001E7CE0-0x001E7F2F inclusive, contiguous, 592 bytes; evidence `ev_eac4b73f35f7e848611805e27755b69208775c82141a15cd738478011088e4cd`.
- Static Ghidra references: 1 caller sites, 8 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001E7CE0`, 592 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (592/592 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 592 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `aa311a2ac229e25ac869d433f59388bf19b13d3673b88084c9c97206a9abbc7f`; candidate object SHA-256: `b89d4f7f54c7e0e7e9a6154ca8fb05cad3882687b462664f3f8dd50eec708dd4`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
