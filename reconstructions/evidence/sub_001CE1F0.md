# sub_001CE1F0

- Function task: [#2910](https://github.com/soldieg/ReBLACK-XBOX/issues/2910).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CE1F0â€“0x001CE261 inclusive, contiguous, 114 bytes; evidence `ev_2fb69a38a741906ee3e4b701417af02e2f14829e9a1f3bf1b8cbf17d62bc81d7`.
- Static Ghidra references: 21 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CE1F0`, 114 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (114/114 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 114 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4db7e0ddb98235e7e16d2dab58cee06fe4aaeb0e88da3a05d9f4ff7cf58bc764`; candidate object SHA-256: `b3b72b09fcbef8c82845bdbfa4916ca02f4707f45c66639f0a75e4c8a102a2af`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
