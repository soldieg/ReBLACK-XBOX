# sub_0023FAEE

- Function task: [#5633](https://github.com/soldieg/ReBLACK-XBOX/issues/5633).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0023FAEE-0x0023FB02 inclusive, contiguous, 21 bytes; evidence `ev_2c587d2877c1f155d0af6e912c376e805794c80d7893a1ce05b31a15e23415ff`.
- Static Ghidra references: 2 caller sites, 0 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0023FAEE`, 21 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (21/21 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 21 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a9adbbdf8b046c8e29005f4792def14e296a6451fc8b01fa08711c8fffa82e23`; candidate object SHA-256: `e6654afe7ee26caa64e52c96c7ae5a6b1a2159044005a6bc52b4ecffdd0598fc`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
