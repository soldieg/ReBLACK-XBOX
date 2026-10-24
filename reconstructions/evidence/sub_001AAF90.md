# sub_001AAF90

- Function task: [#2723](https://github.com/soldieg/ReBLACK-XBOX/issues/2723).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AAF90–0x001AAFBB inclusive, contiguous, 44 bytes; evidence `ev_a10f3273e9e2fc2ad975f60cbf63878a92b395bb7ac8a56e8b25cb4546cb581e`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AAF90`, 44 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (44/44 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 44 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e772c701c2216f60ad4717076ec37d03b6b71bda51980eaba785cfeab4ff1e46`; candidate object SHA-256: `a241882c894726464588dd8cb0e471cb3d2d5a39832cfb28b89be63013e0ddd4`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
