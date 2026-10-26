# sub_0027FFB2

- Function task: [#5673](https://github.com/soldieg/ReBLACK-XBOX/issues/5673).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0027FFB2-0x0027FFE4 inclusive, contiguous, 51 bytes; evidence `ev_ee222d912ad8a0206fda578737ea75bed977821e2dd4f1d63b65949a120b4d3a`.
- Static Ghidra references: 2 caller sites, 1 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0027FFB2`, 51 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (51/51 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 51 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2f5fbbdcb5f5f5f79f24f38ffaa9954306366880cc0ac41c35fd2af27f265a83`; candidate object SHA-256: `e5bc82f8a4ea759953d1fced57c7a25e5c9fcb491d8a0351b8a62059241cdd82`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
