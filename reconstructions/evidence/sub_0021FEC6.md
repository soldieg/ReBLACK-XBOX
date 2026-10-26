# sub_0021FEC6

- Function task: [#5437](https://github.com/soldieg/ReBLACK-XBOX/issues/5437).
- Batch: 52 (current 100-lot run: 52/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021FEC6-0x0021FF08 inclusive, contiguous, 67 bytes; evidence `ev_cc7d2c3f607739ca9e64216635bc900c0065fe32b20d54ac52cb2d8810aeab97`.
- Static Ghidra references: 3 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021FEC6`, 67 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (67/67 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 67 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2ee4076446bb63465bd131cd6eb70f3515cb82c551e71e9d34e169acf402de11`; candidate object SHA-256: `47bb59a31370bd2521d3ac8cd3e26fc110faab0e424592f76b85dadff7f3b56a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
