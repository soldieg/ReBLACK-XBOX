# sub_0026ECF0

- Function task: [#5663](https://github.com/soldieg/ReBLACK-XBOX/issues/5663).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0026ECF0-0x0026ED4C inclusive, contiguous, 93 bytes; evidence `ev_4b256d9eb5b08032290dbc40d14ea8777ade609f6e4eda7b588385d85ed32d27`.
- Static Ghidra references: 1 caller sites, 0 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0026ECF0`, 93 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (93/93 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 93 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `27a4fd53e2069c6c9d5b71fe803d88659a476e5da0c8f3f8edfe7a1041fa8899`; candidate object SHA-256: `73bd7f2c10376c3bc54cf1f4e423dfd44f9eecbeba99b01be92bf1108cbc7d7f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
