# sub_000BC4A0

- Function task: [#4196](https://github.com/soldieg/ReBLACK-XBOX/issues/4196).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BC4A0-0x000BC4EB inclusive, contiguous, 76 bytes; evidence `ev_1ebb781c00f6dd68a15df5cdf7736c48601c1ded9b1f7eeb2b9c3cdd1fcf2b8b`.
- Static Ghidra references: 3 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BC4A0`, 76 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (76/76 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 76 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `105a597694b16160d139dfb3d880d149b5c6c4a2de0539074d0b1677c168bec4`; candidate object SHA-256: `dbb687a69c2a3d66c2252ce51059c63cf5ab2f7b1009cb1683a8531badaae0a0`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
