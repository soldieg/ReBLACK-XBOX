# sub_001C9AE0

- Function task: [#2874](https://github.com/soldieg/ReBLACK-XBOX/issues/2874).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001C9AE0–0x001C9B8C inclusive, contiguous, 173 bytes; evidence `ev_6d5cc015c2507f2433d98d8d9b3ada9ad8dae642d06cd29a2b000fe36cc5a330`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001C9AE0`, 173 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (173/173 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 173 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `491f7c0f08703f2aad75177ffcc7e8f12eb5272be368b0c5a8e2bf4db86db6b2`; candidate object SHA-256: `db13c0e7d1f22163abd919e60b1dc0307482ba3814c1df7d60163cc3c43538a4`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
