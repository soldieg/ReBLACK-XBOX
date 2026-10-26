# sub_0027DE6B

- Function task: [#5668](https://github.com/soldieg/ReBLACK-XBOX/issues/5668).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0027DE6B-0x0027DE9D inclusive, contiguous, 51 bytes; evidence `ev_57296466bd73cca74d7d18cff478e432b25b60c097c17006cf4ab497118e3e04`.
- Static Ghidra references: 2 caller sites, 1 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0027DE6B`, 51 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (51/51 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 51 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0f30865595e0bf41c0291fa36380e86bbfe19d7f5b857b7661c4f92c3ed0eb68`; candidate object SHA-256: `24418636de09f09a7e24cdbec75509ac8e4d5a299639e5c0815a131a710e88ea`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
