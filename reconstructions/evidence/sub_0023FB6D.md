# sub_0023FB6D

- Function task: [#5636](https://github.com/soldieg/ReBLACK-XBOX/issues/5636).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0023FB6D-0x0023FBB6 inclusive, contiguous, 74 bytes; evidence `ev_2e85792f0bc3a1e1b0bd98ba4a532aeb2ea69971f3704aed94f2631dd0160a67`.
- Static Ghidra references: 1 caller sites, 0 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0023FB6D`, 74 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (74/74 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 74 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9c17b5d40c93fe0fcda5d1c8865a9f4f0a6c7144957ef5faee97d9002a369a9b`; candidate object SHA-256: `c8cddcf73dcd4df56b24a411fdddd9437fec0b501a11157fb1fb58c4e79d63f6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
