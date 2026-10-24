# sub_001AB3E0

- Function task: [#2726](https://github.com/soldieg/ReBLACK-XBOX/issues/2726).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AB3E0–0x001AB475 inclusive, contiguous, 150 bytes; evidence `ev_ae8411f339e4870f4aa68e087e3fd50d3e6abec3f16a6c4c5d4d88a845980a15`.
- Static Ghidra references: 2 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AB3E0`, 150 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (150/150 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 150 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c4e20cf00c924541e21d5c0a618e97041170f0e5263593bdec3058156b472ae6`; candidate object SHA-256: `6d5633c5f8a601e6762ff9ecfa5e9212a9655b412af37ca03822c0612ef2e369`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
