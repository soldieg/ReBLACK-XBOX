# sub_0021CAC5

- Function task: [#5363](https://github.com/soldieg/ReBLACK-XBOX/issues/5363).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021CAC5-0x0021CAEB inclusive, contiguous, 39 bytes; evidence `ev_90b3de5052ab2f7d778ab771e4c530d233b7ca6764bd166727deb40125a8a9f7`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021CAC5`, 39 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (39/39 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 39 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `064dd6f288f3fe8a2862a601c38aa7e27b3f0d8d3c0af22bab0ad76d1f078036`; candidate object SHA-256: `e084b25ac4925eef99776674bf4953deb9a67f027e81d403fa321701157ebb07`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
