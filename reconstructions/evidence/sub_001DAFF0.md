# sub_001DAFF0

- Function task: [#5246](https://github.com/soldieg/ReBLACK-XBOX/issues/5246).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DAFF0-0x001DB224 inclusive, contiguous, 565 bytes; evidence `ev_9d456e96cb7db7ac4523440b0e2a44649098703b683f7532471f80bf0885c02d`.
- Static Ghidra references: 30 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DAFF0`, 565 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (565/565 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 565 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6d0a3d206688722f91b4712b150d6c9f620b39a20947e63c2c835c0987f0d48b`; candidate object SHA-256: `e797ef7753c63e8773194c15a3de3248e4d78de540b91348700b58f4e03c0bbd`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
