# sub_001CAED0

- Function task: [#2883](https://github.com/soldieg/ReBLACK-XBOX/issues/2883).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CAED0â€“0x001CB0B3 inclusive, contiguous, 484 bytes; evidence `ev_b3e6fa95641fd2d8dcb94cc031a1882efede477227a681dec942bf288d8fd46d`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CAED0`, 484 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (484/484 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 484 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `14114aec6c298a0afc15099d7fd306aac19ff623f9a8f2be9074e594365c8e1f`; candidate object SHA-256: `db2bc6bbdc2798b98c3e01f5ae919e8de2f897afe6216c5ceb75b41c0773651d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
