# sub_00240ECF

- Function task: [#5645](https://github.com/soldieg/ReBLACK-XBOX/issues/5645).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x00240ECF-0x00240F37 inclusive, contiguous, 105 bytes; evidence `ev_6f5ac1554da04ed52806e36b11b0bf0c2383cdd57a83890d6a4194f3cdc16baa`.
- Static Ghidra references: 1 caller sites, 0 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_00240ECF`, 105 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (105/105 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 105 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ded17639bc9044a2c2fb0ccb7133be5240e6e138f6d4e59f15643dab5711dcdd`; candidate object SHA-256: `23231fd6f4e08f260b5cd4f04fe9135028dc5385fe65faa07336c7aa21ba7b8e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
