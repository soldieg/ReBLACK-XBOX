# sub_001AAD50

- Function task: [#2721](https://github.com/soldieg/ReBLACK-XBOX/issues/2721).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AAD50–0x001AAEE9 inclusive, contiguous, 410 bytes; evidence `ev_b277f14ec3235c624266032954b8a757ce8ebeddc9855e26b2168002aea72f13`.
- Static Ghidra references: 0 caller sites, 11 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AAD50`, 410 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (410/410 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 410 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6cb6f07482c5943e90e7e86eb7f41323ed792a2f4e7df656ad0889014967ca1f`; candidate object SHA-256: `b3ee1aa03c33accfd4a60a4ee929a0e7e1086face9797cd4a27b4e8d294c5a33`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
