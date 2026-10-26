# sub_001CCF50

- Function task: [#5691](https://github.com/soldieg/ReBLACK-XBOX/issues/5691).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: fuzzy; fuzzy candidate similarity: 11.70% (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x001CCF50-0x001CCF9D inclusive, contiguous, 78 bytes; evidence `ev_4fab3173adadaec8c1f66fdc334d9519173046f1a6edf8795afed1c37973f6b8`.
- Static Ghidra references: 4 caller sites, 2 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_001CCF50`, 78 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (78/78 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 78 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `802ff247d567de3a44b5038e3d4c7c41069da2c7683fe4fd8d10e77b14735c29`; candidate object SHA-256: `06fe86d0ae052df8262148ab01de727be64ae3627a3a124f67d51bbed3e19042`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
