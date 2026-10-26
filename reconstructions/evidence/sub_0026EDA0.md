# sub_0026EDA0

- Function task: [#5666](https://github.com/soldieg/ReBLACK-XBOX/issues/5666).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0026EDA0-0x0026EE77 inclusive, contiguous, 216 bytes; evidence `ev_f23922700bdebc43b41b31e33e8d29b926cfc8cbdb19861d8aa66344d770c644`.
- Static Ghidra references: 0 caller sites, 1 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0026EDA0`, 216 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (216/216 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 216 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `05c3d3f6ea3edd288e0820a558957714743de0908693381e29747c5e2e21f33d`; candidate object SHA-256: `e086b1dd4eb9a6b5f0e861d6b05209a7efa59ab1171717023c7221b9f7bae649`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
