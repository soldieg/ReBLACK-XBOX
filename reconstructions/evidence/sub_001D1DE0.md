# sub_001D1DE0

- Function task: [#2941](https://github.com/soldieg/ReBLACK-XBOX/issues/2941).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001D1DE0â€“0x001D1E3C inclusive, contiguous, 93 bytes; evidence `ev_e02df54cde45bee70f463b597f4413b66347392268bd0c065fb5167fc313bfa4`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001D1DE0`, 93 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (93/93 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 93 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9119f2287ff067b71c2af8b09b9683373415b21fd1e4cf4d0322ca0d15b62eec`; candidate object SHA-256: `2f1a2db6a14c72aa91295056472141d3bea4a3bf161afa70fcb59e3c53f4c848`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
