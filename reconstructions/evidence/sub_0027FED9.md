# sub_0027FED9

- Function task: [#5672](https://github.com/soldieg/ReBLACK-XBOX/issues/5672).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0027FED9-0x0027FF1D inclusive, contiguous, 69 bytes; evidence `ev_7be467bf11687a39d91954db091290fc8e257045a8d1dd03c373b581116a72b3`.
- Static Ghidra references: 5 caller sites, 3 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0027FED9`, 69 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (69/69 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 69 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d09f16431bbb9901bded0569743040ab10086c539479cc7838c19283b2d52c23`; candidate object SHA-256: `d1c77d35036b6aa8f4b8322b97dd63d91a5a16cdec31a8aa349a342f543588c6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
