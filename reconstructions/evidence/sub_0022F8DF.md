# sub_0022F8DF

- Function task: [#5704](https://github.com/soldieg/ReBLACK-XBOX/issues/5704).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: 0x22faab; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0022F8DF-0x0022FB67 inclusive, contiguous, 649 bytes; evidence `ev_0fd542b471745da00d35419b9af2209444bac84a266b347e2a42f71236185b4f`.
- Static Ghidra references: 0 caller sites, 0 resolved direct callees; unresolved indirect call instructions: 1. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: Computed/indirect callsites 0x22faab have unresolved destination identities in the Ghidra ReferenceManager export.
- Target candidate: `sub_0022F8DF`, 649 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (649/649 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 649 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6cada06fe201ac32f37394ec2ddebc11669d53a511c65e935f335603679dffb3`; candidate object SHA-256: `ce87a056afc801670410acf22419622d6c250287d091037223951dfd063ffacf`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
