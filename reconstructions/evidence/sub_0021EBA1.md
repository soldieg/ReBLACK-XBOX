# sub_0021EBA1

- Function task: [#5414](https://github.com/soldieg/ReBLACK-XBOX/issues/5414).
- Batch: 52 (current 100-lot run: 52/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021EBA1-0x0021EC22 inclusive, contiguous, 130 bytes; evidence `ev_ae82312f7b028e5fff5acbbfbe2591121171ae829563dba377f75805473df30b`.
- Static Ghidra references: 4 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021EBA1`, 130 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (130/130 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 130 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6a965a6980767be88c89103350835f8ad93e41d6ab559a076ecd87b33c5d65c6`; candidate object SHA-256: `6ab1dce77a7c64135c6059c47d0b8a25fd8b390d175feb107d74e133406d7ff5`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
