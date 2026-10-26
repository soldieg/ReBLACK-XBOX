# sub_0021C7EF

- Function task: [#4491](https://github.com/soldieg/ReBLACK-XBOX/issues/4491).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021C7EF-0x0021C83E inclusive, contiguous, 80 bytes; evidence `ev_eb83fb2cf132d63ebb510a37ff25dc60354fd0531d5e92caaf9913ff1cad8e35`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021C7EF`, 80 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (80/80 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 80 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `46c013cc3a1d9abc1e8a62625bfd5d8f60005ab8a642e7b84728d03b7cbeb97f`; candidate object SHA-256: `dc1841de479e4ffa27564139ea049d5a450e485fd037d32442bf5f06b6ac8152`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
