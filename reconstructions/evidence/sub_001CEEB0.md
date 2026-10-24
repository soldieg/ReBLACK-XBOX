# sub_001CEEB0

- Function task: [#2919](https://github.com/soldieg/ReBLACK-XBOX/issues/2919).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CEEB0â€“0x001CEEC5 inclusive, contiguous, 22 bytes; evidence `ev_d4fab0207d7e0d75b94150733c729749c861d70d5e5066dac41533b77e4a160a`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CEEB0`, 22 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (22/22 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 22 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `eb2d1e0650e5bc4bb589fd5437475b2d2f633d96a566d36d19db01294299dabf`; candidate object SHA-256: `147a28c4e4b9ff07154846e9fc64d27577fa979f034fda0811d3fe62b02b2338`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
