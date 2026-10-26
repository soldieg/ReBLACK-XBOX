# sub_000D6AA0

- Function task: [#4311](https://github.com/soldieg/ReBLACK-XBOX/issues/4311).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000D6AA0-0x000D6BF8 inclusive, contiguous, 345 bytes; evidence `ev_d19c0028a8614facbb72f4fa6460e45493bd227b012632e40e12ea6b9afe2d28`.
- Static Ghidra references: 10 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000D6AA0`, 345 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (345/345 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 345 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `258157b47fea6ebb8adb5ce7a76f795315f56628c9da54151c992d8dfe4fb902`; candidate object SHA-256: `3dacf179030abc49857dfe490f26e7cc4782ec941edf3eab586aec65288f9653`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
