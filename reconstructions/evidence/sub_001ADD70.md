# sub_001ADD70

- Function task: [#2749](https://github.com/soldieg/ReBLACK-XBOX/issues/2749).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001ADD70–0x001ADDE7 inclusive, contiguous, 120 bytes; evidence `ev_c80e7dac7c23459ce6b8413e8ee323cc7042e994c7810ecb9ec597d639c1639f`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001ADD70`, 120 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (120/120 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 120 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c6d24add548e70bcf756c15950c71ce345a419ece9d3b6d68abfb87a82b9e720`; candidate object SHA-256: `62cb77a7d9564f4bd467309138b0af170563432a950d8d42d749368dfd355c0f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
