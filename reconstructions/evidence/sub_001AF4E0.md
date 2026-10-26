# sub_001AF4E0

- Function task: [#2767](https://github.com/soldieg/ReBLACK-XBOX/issues/2767).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AF4E0–0x001AF577 inclusive, contiguous, 152 bytes; evidence `ev_d437f297e8dcb1adcd1ee834f0dec25e5300d44da89354d8fd01acab29af1145`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AF4E0`, 152 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (152/152 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 152 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e099e8809dc1a8989d13dafb10c83d7c49836e436c48246599a33034a0c37f6f`; candidate object SHA-256: `10b297a9bee16a875099386176efbf1670b4dfe9f85a0f5dc6230ae782d36d0f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
