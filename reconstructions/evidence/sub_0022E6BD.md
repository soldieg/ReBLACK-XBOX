# sub_0022E6BD

- Function task: [#5613](https://github.com/soldieg/ReBLACK-XBOX/issues/5613).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0022E6BD-0x0022EA18 inclusive, contiguous, 860 bytes; evidence `ev_8fc77c7e2a2a802473474164b4754092a9c73a8e9bcbb9c00f83cc91f5d1c55a`.
- Static Ghidra references: 1 caller sites, 0 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0022E6BD`, 860 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (860/860 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 860 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `be384955f02cfbe2fe54435c80c7912bafc6648dc72d89be9520a96be7e1ee2e`; candidate object SHA-256: `29b20dbbff1ab0bb4faf909e8886b5749e8b500987d6f336eef8eac898c10493`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
