# sub_001AD2F0

- Function task: [#2746](https://github.com/soldieg/ReBLACK-XBOX/issues/2746).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AD2F0–0x001AD408 inclusive, contiguous, 281 bytes; evidence `ev_eda62b059dfd2930f6d97fa724daecad9153bb58a4f63fea6be6f018ddd0a2f5`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AD2F0`, 281 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (281/281 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 281 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `aa9dd98f87426d7f69337d8b0e7c4525df7f7c00b3cb4dd5b5685d52cef73b6f`; candidate object SHA-256: `554a5c722cdbb5b7d71237db887d08a275690aa482d3bfb0ccd3a1c17d940bad`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
