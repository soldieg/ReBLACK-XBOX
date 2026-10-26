# sub_0023FBB7

- Function task: [#5637](https://github.com/soldieg/ReBLACK-XBOX/issues/5637).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0023FBB7-0x0023FCAD inclusive, contiguous, 247 bytes; evidence `ev_7e4bad9b758a88ecc5b7e09c4302025b5e5d23a97f5f216a7e24c1c6530762f4`.
- Static Ghidra references: 1 caller sites, 0 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0023FBB7`, 247 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (247/247 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 247 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `164b42c3ceaa4130d63e52feec8674e429d9c03181fd1afd973a0bca2068f353`; candidate object SHA-256: `8ef2767f851efdbabed4b3dff35c46591b3c27fdcee6e91bd2a0fc5edf504a41`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
