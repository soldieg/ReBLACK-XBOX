# sub_00025CCA

- Function task: [#4697](https://github.com/soldieg/ReBLACK-XBOX/issues/4697).
- Batch: 45 (current 100-lot run: 45/100; 100 functions).
- Ghidra 12.1.3 body: 0x00025CCA-0x00025FFD inclusive, contiguous, 820 bytes; evidence `ev_eb3f779487adcf1364c395b771df4aa3062a9da2f6a99bce06ca93ede99eca47`.
- Static Ghidra references: 1 caller sites, 7 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; 14 indirect call instructions and 0 incoming sites without a caller owner remain unresolved. Direct call edges were checked against disassembly; complete caller/callee coverage is not claimed.
- Target candidate: `sub_00025CCA`, 820 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (820/820 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 820 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `db6f8dd1c1f57981f6741ca851fdad202a8d833ecd2bfe877eda4077029053bf`; candidate object SHA-256: `88944f352c836d3c211982964d31554af84ec8156ee8a8919a94ac1c471d19dd`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
