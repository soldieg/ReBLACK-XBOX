# sub_0027FCEB

- Function task: [#5671](https://github.com/soldieg/ReBLACK-XBOX/issues/5671).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0027FCEB-0x0027FD60 inclusive, contiguous, 118 bytes; evidence `ev_ce11c8b29b61d96099b3ea9ede8d38235cfffc53914e4f41f3375572cf3ec7c3`.
- Static Ghidra references: 2 caller sites, 5 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0027FCEB`, 118 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (118/118 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 118 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `85e7cc37da3a194d943523a3522831eda9a4b145353d2780f823632261a84db7`; candidate object SHA-256: `84735ddac39773928fa272c43cdf1a0f5400c96acf9381502a6a854f2eb12fec`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
