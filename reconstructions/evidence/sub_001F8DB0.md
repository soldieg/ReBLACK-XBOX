# sub_001F8DB0

- Function task: [#3061](https://github.com/soldieg/ReBLACK-XBOX/issues/3061).
- Batch: 29 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x001F8DB0â€“0x001F8E33 inclusive, contiguous, 132 bytes; evidence `ev_9b037328fdc189525763cea236a11bb1b336ce1dac825918f1b93c87ae36c3aa`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001F8DB0`, 132 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (132/132 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 132 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `843113ac0b38e365f2feb3e9363bdef5dc79969050f036b4e496f48dcd8afa81`; candidate object SHA-256: `f884ffe3376bf32ae813b5ae202d8d46749b6918d2d141e6e9fcebd6be1e8632`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
