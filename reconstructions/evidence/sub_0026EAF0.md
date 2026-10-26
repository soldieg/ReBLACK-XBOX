# sub_0026EAF0

- Function task: [#5662](https://github.com/soldieg/ReBLACK-XBOX/issues/5662).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0026EAF0-0x0026ECEE inclusive, contiguous, 511 bytes; evidence `ev_1eb28d4711302709f680492bee0b5298a4213c51579844fa29442cde2853a038`.
- Static Ghidra references: 9 caller sites, 1 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0026EAF0`, 511 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (511/511 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 511 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f00a4443f5a919d5c75c142298474582581ffdd8eee97935e1866aadc90e3719`; candidate object SHA-256: `3fa65964915d22d10b4a6e0950e68a996d74ab59d59e03d5c0e07f49f4517087`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
