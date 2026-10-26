# sub_001CE8A0

- Function task: [#2915](https://github.com/soldieg/ReBLACK-XBOX/issues/2915).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CE8A0â€“0x001CE8B5 inclusive, contiguous, 22 bytes; evidence `ev_3df6e34c9c5d84b100692800f23442db5da25a8adbb8338e23b0111e94256068`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CE8A0`, 22 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (22/22 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 22 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7b0d58c41cc9dbeb8f172e28f30195a5c24b3d7de1b1165be2b6119fb9a5e59d`; candidate object SHA-256: `7c11e77d98faa72e5c9edc5cab1598203353291104ce122f99947eba74733f07`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
