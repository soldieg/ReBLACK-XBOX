# sub_001BA7F0

- Function task: [#2786](https://github.com/soldieg/ReBLACK-XBOX/issues/2786).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001BA7F0–0x001BA83B inclusive, contiguous, 76 bytes; evidence `ev_d4d2db970d9a9685be08632ebceda9b8708a3e469509aab4cba1cd693bd2a4f1`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001BA7F0`, 76 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (76/76 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 76 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e7a2e972c99e91f1e17e327a614420d595ec403d31bc0900c8253b347a0a9783`; candidate object SHA-256: `59032ede0e447dbb766be9c3fcb7d992f9bb70a968f71dec6707810455aaaf81`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
