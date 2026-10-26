# sub_001DA4F0

- Function task: [#5244](https://github.com/soldieg/ReBLACK-XBOX/issues/5244).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DA4F0-0x001DAAB9 inclusive, contiguous, 1482 bytes; evidence `ev_f76e7afb5423677ec1c8ae2b76e05e1d86acfb7fe932e7c9048f0e64a96fe773`.
- Static Ghidra references: 3 caller sites, 18 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DA4F0`, 1482 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1482/1482 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1482 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3a1498c332038efd4781c58a3723fdf6b7683e89ec1dc74f5213f6bf94808899`; candidate object SHA-256: `63b04d1e4754bf626bc125db0193d92c6766b21e200b5c634b2ab2029cbc33ff`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
