# sub_001FEFB0

- Function task: [#3098](https://github.com/soldieg/ReBLACK-XBOX/issues/3098).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FEFB0â€“0x001FF474 inclusive, contiguous, 1221 bytes; evidence `ev_af099ba22eeb4f2e14b03353b1ec4d68c44b5826d1c442f384b74aed62578587`.
- Static Ghidra references: 1 caller sites, 16 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FEFB0`, 1221 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1221/1221 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1221 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `701dced2c216c02436337951b998d183162cae7aecf0572ff9634b07425ca955`; candidate object SHA-256: `7ca4f677736347a0310defa884dd7a88722c77d4959fb554cd719bc8283a01da`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
