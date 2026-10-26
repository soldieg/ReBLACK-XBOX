# sub_001EAF40

- Function task: [#5323](https://github.com/soldieg/ReBLACK-XBOX/issues/5323).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001EAF40-0x001EB078 inclusive, contiguous, 313 bytes; evidence `ev_1694acd475c50154eed2066631c4c825a5e4e73c033e5820d32592164e23eba2`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001EAF40`, 313 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (313/313 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 313 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e8c05de9a9963e9dc5995d6bd18f998649d53c16226e6d379189fe797f09ffdf`; candidate object SHA-256: `802d1e01b6ff430295ee08c5bc49b5ca232f7b31e06d3a5d86140f1f205efb3a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
