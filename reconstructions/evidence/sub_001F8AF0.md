# sub_001F8AF0

- Function task: [#3059](https://github.com/soldieg/ReBLACK-XBOX/issues/3059).
- Batch: 29 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x001F8AF0â€“0x001F8B43 inclusive, contiguous, 84 bytes; evidence `ev_29279f07082e0bf253b258244104e9816c818caabab73ada51e7ddca88609715`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001F8AF0`, 84 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (84/84 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 84 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `bf211c8c110b23d3a5555d692df8d76301a8f4f7184f66b0f8bebc8c856fe54b`; candidate object SHA-256: `1a338ffe3c14456c965c0a0c8fc92dcdf41bbb2f76079445bc6f46cf56c01378`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
