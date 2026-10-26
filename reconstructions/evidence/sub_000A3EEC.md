# sub_000A3EEC

- Function task: [#4081](https://github.com/soldieg/ReBLACK-XBOX/issues/4081).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A3EEC-0x000A3EFF inclusive, contiguous, 20 bytes; evidence `ev_79236cc5402194eb13a42a0282be420a4bf0b1d6898f86af571190298e032207`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A3EEC`, 20 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (20/20 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 20 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `06968f7008719913d65f4e4da14a418b11cca243a28f2f8eb14892d222a9179c`; candidate object SHA-256: `4a4a3d4e6c76da6c89fb50c17bc11f483be5fd6e11bec32a8bcc32a622d4fd56`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
