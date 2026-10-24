# sub_001C1EC0

- Function task: [#2817](https://github.com/soldieg/ReBLACK-XBOX/issues/2817).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001C1EC0–0x001C1F11 inclusive, contiguous, 82 bytes; evidence `ev_a822d8bd5bd7ab2eee6ab7f2210849cfe669efb1148a0a44f50365ca5f847b76`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001C1EC0`, 82 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (82/82 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 82 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `fbf95269c5b8fd339fcfd2d8e3052c0ddb574a40aa62b07e98e6eea5fd9ba1a3`; candidate object SHA-256: `e4a1281564d28c2618e37e87941ccd9af4f58ff7b963037e3961fa44fa491074`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
