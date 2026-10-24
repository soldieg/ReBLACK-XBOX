# sub_001ABFC0

- Function task: [#2737](https://github.com/soldieg/ReBLACK-XBOX/issues/2737).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001ABFC0–0x001AC1AB inclusive, contiguous, 492 bytes; evidence `ev_e5504cd63d7c76af1dd49ef8ecc1fcc986464f5e62e46f9e6c4d43f370b29c28`.
- Static Ghidra references: 0 caller sites, 8 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001ABFC0`, 492 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (492/492 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 492 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `94c1cc6294acc3e8ad874e6b01aead91772ad924b1264d2f13c754a01a585cde`; candidate object SHA-256: `2d30518b2323cf421ac3189a0f5079140797971e3dcc96bd1ab5c9e9da5adc26`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
