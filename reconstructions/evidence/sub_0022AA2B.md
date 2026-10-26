# sub_0022AA2B

- Function task: [#5582](https://github.com/soldieg/ReBLACK-XBOX/issues/5582).
- Batch: 53 (current 100-lot run: 53/100; 100 functions).
- Ghidra 12.1.3 body: 0x0022AA2B-0x0022AA68 inclusive, contiguous, 62 bytes; evidence `ev_cfe033cb42ed7f6ff77fd8f29e1b3596504372368feee2e9d76a4d39330e1d20`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0022AA2B`, 62 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (62/62 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 62 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `44042dd4128c64ee757e943b461a32034c21f1bb6b9d89559555ca243cf7b5cb`; candidate object SHA-256: `c2f1fe0d09020153d33b34b7cb3ff923b3773bfb7fedb96ff2f8236a991cd4bc`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
