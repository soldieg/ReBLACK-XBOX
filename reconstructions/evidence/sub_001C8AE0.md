# sub_001C8AE0

- Function task: [#2861](https://github.com/soldieg/ReBLACK-XBOX/issues/2861).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001C8AE0–0x001C8B32 inclusive, contiguous, 83 bytes; evidence `ev_310a7714990495dbbba7fbbf6dfd697cd7077f3bf46f340493a7790925fd74d2`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001C8AE0`, 83 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (83/83 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 83 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `52cb94b48d604e3a58615da45fc85328df6424154e208b4630525b8b2111a3fb`; candidate object SHA-256: `65b0b23d8bbdc2baa694c9d2f25f1badc889616e2a273df1bda69b52d6dfb717`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
