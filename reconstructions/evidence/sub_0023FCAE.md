# sub_0023FCAE

- Function task: [#5640](https://github.com/soldieg/ReBLACK-XBOX/issues/5640).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0023FCAE-0x0023FE0A inclusive, contiguous, 349 bytes; evidence `ev_3621f92e942a8116471cc4e26918ce99ca28d7a2a70256ad951d3d30ce11cf8f`.
- Static Ghidra references: 1 caller sites, 1 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0023FCAE`, 349 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (349/349 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 349 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0183affb7f8b2bd05fd623b9d96ecc0898ee0e0e66fdbdde138b27be08942b9f`; candidate object SHA-256: `b050822fba3d78e0c182c8ddffc88d487288cb29e19ffadb05e102e1e0f8152e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
