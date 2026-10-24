# sub_001A6BD0

- Function task: [#2680](https://github.com/soldieg/ReBLACK-XBOX/issues/2680).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001A6BD0–0x001A6CF8 inclusive, contiguous, 297 bytes; evidence `ev_6434169cc97505b2e9778f1c00c8a1fbfb0892b535e7814d479604e337000692`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001A6BD0`, 297 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (297/297 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 297 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `996599abbdc710896c2244553e2ae0041527cfdc90d7f44f68aeb4ba43cdd7ed`; candidate object SHA-256: `d6c20a600a9f6eee9ad29c5f4eefc85a8517bf4afd518aa00f8c649cd4fb65a8`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
