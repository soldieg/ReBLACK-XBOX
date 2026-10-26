# sub_001ADDF0

- Function task: [#2750](https://github.com/soldieg/ReBLACK-XBOX/issues/2750).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001ADDF0–0x001ADE63 inclusive, contiguous, 116 bytes; evidence `ev_98bda9777a9e0608693709bab8920be2dc24058c6440f500bf900c118e586aab`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001ADDF0`, 116 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (116/116 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 116 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0cfe5d6dc581d51cb5558d701a7082ae976d568e894a9ce61a7f6657928bb801`; candidate object SHA-256: `6ad7f7f3a10a974fbc1c034a09689dc6b792722aaed233896d8b9f95f4a9f6f4`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
