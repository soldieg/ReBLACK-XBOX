# sub_001CC8B0

- Function task: [#2899](https://github.com/soldieg/ReBLACK-XBOX/issues/2899).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CC8B0â€“0x001CC8FA inclusive, contiguous, 75 bytes; evidence `ev_01691048ae5e84725d8f68cb73c19c7bf7d531dbc9fbcbc58daca7e21cfe93cf`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CC8B0`, 75 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (75/75 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 75 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7c8d8f9620bc13671f3c87392bc4a90afbe81b9f6a12c58876428a7d19f4baf5`; candidate object SHA-256: `9d01ef10f9a73003efd9c97a2dc60fe4a997c48ba29d3cae8c3766b18aad18fd`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
