# sub_001BB3C0

- Function task: [#2788](https://github.com/soldieg/ReBLACK-XBOX/issues/2788).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001BB3C0–0x001BB3E5 inclusive, contiguous, 38 bytes; evidence `ev_e40f19ff2a1a2d04b766a921c8194035a4f47e7cc952b69e62f0112853422640`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001BB3C0`, 38 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (38/38 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 38 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `edf272c7fff890d203a487ede446078591c17a2994fc0265895d2a738c3ab25c`; candidate object SHA-256: `3a11af0b3a44531ad42c158b4a952c6a2fea33d3343cf27c8d853c1ee64c755f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
