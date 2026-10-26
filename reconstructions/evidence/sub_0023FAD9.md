# sub_0023FAD9

- Function task: [#5632](https://github.com/soldieg/ReBLACK-XBOX/issues/5632).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0023FAD9-0x0023FAED inclusive, contiguous, 21 bytes; evidence `ev_01383c3af8fac2c8eb7ad2311ad7892dbfe2ae08096444de34c264705af7a8e2`.
- Static Ghidra references: 6 caller sites, 0 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0023FAD9`, 21 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (21/21 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 21 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6c34dc67ef42f285a471bc5b23412a39358ada2330892be38f7470e079b14d74`; candidate object SHA-256: `110950baece83e6397fa870c6bdffd561d19247e1d32d04e3f3da5d4e07227a8`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
