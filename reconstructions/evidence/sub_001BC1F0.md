# sub_001BC1F0

- Function task: [#2792](https://github.com/soldieg/ReBLACK-XBOX/issues/2792).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001BC1F0–0x001BC259 inclusive, contiguous, 106 bytes; evidence `ev_1ef3081adec3a76999431f353511821d12d556298a83430bda01eaf30e2aa9c0`.
- Static Ghidra references: 3 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001BC1F0`, 106 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (106/106 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 106 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e4a1cf3517f071845fcdb5cf74ee60dc2f24f8f4c47dc16d393962d1c8641e89`; candidate object SHA-256: `d2151dabd235e3d6865ebf22bb3f484acab0b137bd1db88536b4869915ee0c00`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
