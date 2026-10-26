# sub_001B2EF0

- Function task: [#5214](https://github.com/soldieg/ReBLACK-XBOX/issues/5214).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001B2EF0-0x001B3004 inclusive, contiguous, 277 bytes; evidence `ev_1bae143f871069adbf49eb5aa4f812bbeeabe852cf08d2a0d9214155392dee3e`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001B2EF0`, 277 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (277/277 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 277 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `49af1186a4e70a35fa89b2bb2e6f1526d853c9d1eed094f94a0450844dc56e70`; candidate object SHA-256: `90f8d1d2b2baa196a3ec7eecb44550bc6a463ded9ade6def4e4e8ef7b7bfa32a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
