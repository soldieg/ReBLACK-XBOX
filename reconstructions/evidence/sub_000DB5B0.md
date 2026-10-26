# sub_000DB5B0

- Function task: [#4342](https://github.com/soldieg/ReBLACK-XBOX/issues/4342).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DB5B0-0x000DB60E inclusive, contiguous, 95 bytes; evidence `ev_a7c7d35b6f232675a2bb16e6a4fe7fc358f41a4d03e4e499de47843ddd699999`.
- Static Ghidra references: 5 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DB5B0`, 95 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (95/95 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 95 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `539215790ab2f869d7ba1b81dc7c3b3aa139196e7633dc1edb4bde829b370cc6`; candidate object SHA-256: `68a6e892a0754bdd11aabb05c142967d78da47b0dab961c1be496c16fb8f52a3`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
