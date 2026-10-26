# sub_00282ABA

- Function task: [#5685](https://github.com/soldieg/ReBLACK-XBOX/issues/5685).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x00282ABA-0x00282B24 inclusive, contiguous, 107 bytes; evidence `ev_8663b9f3b3a6f5773c26bf2c34957a54e1b51b4dadea783ac81266e5d4b47e14`.
- Static Ghidra references: 0 caller sites, 2 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_00282ABA`, 107 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (107/107 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 107 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `218df88742a4c0ad18791679a3529cd077bd80bdea70755b085f5ecf6e0fb6cc`; candidate object SHA-256: `db66be77a0ea35d6981b88cd244ce47544135733d3f460e54ea643d9763757cb`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
