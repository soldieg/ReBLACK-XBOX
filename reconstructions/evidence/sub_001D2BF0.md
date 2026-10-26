# sub_001D2BF0

- Function task: [#2951](https://github.com/soldieg/ReBLACK-XBOX/issues/2951).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001D2BF0â€“0x001D2D6B inclusive, contiguous, 380 bytes; evidence `ev_470e0e7141b3e303e4e79d7a237b2226b71582d4933d49ebc2542226cc0b8d87`.
- Static Ghidra references: 3 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001D2BF0`, 380 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (380/380 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 380 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c8832da490771b362cac7e4e1ad162f7d47be3477ad9c5a4b39f8f7875a99067`; candidate object SHA-256: `acab72193918d578caa6c1897cf22bc809822bf14b120f22f6e2c6eff46eb845`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
