# sub_001DEAC0

- Function task: [#5268](https://github.com/soldieg/ReBLACK-XBOX/issues/5268).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DEAC0-0x001DEC06 inclusive, contiguous, 327 bytes; evidence `ev_17750511e72af1523788f7a59e632e4157446277c6ce87f32295a376ffd9c67c`.
- Static Ghidra references: 0 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DEAC0`, 327 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (327/327 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 327 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `21cddc84e303e587139fc2188c6447b3c9bcc8c1c7fad3ab7f69c8ab90604480`; candidate object SHA-256: `442013d5b6eeefa185a75cd72af35fd2958595ab9da974e172867bd1827ec93c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
