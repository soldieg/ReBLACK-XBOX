# sub_001C3CA0

- Function task: [#2837](https://github.com/soldieg/ReBLACK-XBOX/issues/2837).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001C3CA0–0x001C3CDB inclusive, contiguous, 60 bytes; evidence `ev_b88f887d537f35ffa34977407695aa5b8484e2ff6f06d0345dbc8afe224256a6`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001C3CA0`, 60 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (60/60 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 60 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c572960b975b3f4462de7a9ecc0b153f5d2d32dd341714e95ac4fe05e92420fb`; candidate object SHA-256: `07da3420cfd6ad3e2968966705187619d5a3bfca2653a972176dbd59db852c2b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
