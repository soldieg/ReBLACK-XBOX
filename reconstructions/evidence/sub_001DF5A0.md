# sub_001DF5A0

- Function task: [#5271](https://github.com/soldieg/ReBLACK-XBOX/issues/5271).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DF5A0-0x001DF61E inclusive, contiguous, 127 bytes; evidence `ev_a6c1f1bcd1cd9fe45898566e0673ab12bbff538812905d1d7a3dabdd1d26cff2`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DF5A0`, 127 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (127/127 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 127 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e064366b523ec41b26b0a1c59fd659a82098c1711e45ce807724be903f564551`; candidate object SHA-256: `6dedcd9b997f13fc404cd41a7769b1eba49d04a1d305fb4daddb4510a7c5371e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
