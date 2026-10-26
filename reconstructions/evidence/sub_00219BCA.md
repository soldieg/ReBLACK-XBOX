# sub_00219BCA

- Function task: [#3235](https://github.com/soldieg/ReBLACK-XBOX/issues/3235).
- Batch: 31 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x00219BCAâ€“0x00219D01 inclusive, contiguous, 312 bytes; evidence `ev_46735668b29ecb03867ec303f36b228a76072c33f40da77d47448cb98c85aa3b`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_00219BCA`, 312 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (312/312 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 312 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6398c7d69f218c05f9a8de8286afc25314e3a4765f2f8c3683568779fb501aeb`; candidate object SHA-256: `9e73622bd62bd7cf82662b858e0092c3ecb0a983033a5a9f3054ae729841f319`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
