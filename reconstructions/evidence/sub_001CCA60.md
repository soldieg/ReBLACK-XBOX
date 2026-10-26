# sub_001CCA60

- Function task: [#2901](https://github.com/soldieg/ReBLACK-XBOX/issues/2901).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CCA60â€“0x001CCB9D inclusive, contiguous, 318 bytes; evidence `ev_301cfce26d61e8101044b7ad0d10559812fc0febc722cfb698863f8da40517ce`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CCA60`, 318 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (318/318 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 318 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2c7d7f8d369c03afdacbda3502c9c20b4aee0b1d5eba9c7dd20183d2ff944031`; candidate object SHA-256: `5cf99eef16ca00d588839a3d42171279667f2fc5071e08293a9e38135955a747`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
