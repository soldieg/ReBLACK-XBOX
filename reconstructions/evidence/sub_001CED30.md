# sub_001CED30

- Function task: [#2917](https://github.com/soldieg/ReBLACK-XBOX/issues/2917).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CED30â€“0x001CEE0C inclusive, contiguous, 221 bytes; evidence `ev_68c8c53b2fe5d793e4c97e576665c700abe5bfdff07dc28834247a2ead392ef6`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CED30`, 221 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (221/221 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 221 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `08381da59ccb2c08456e253e13bff0a663f84581f02474bf744fab21a357007b`; candidate object SHA-256: `0cb3025af5f4f64bdd9fd0cb6ac7edcef40468d39a6f2490a83c0a7808dfe8d6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
