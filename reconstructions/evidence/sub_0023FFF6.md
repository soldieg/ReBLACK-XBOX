# sub_0023FFF6

- Function task: [#5638](https://github.com/soldieg/ReBLACK-XBOX/issues/5638).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0023FFF6-0x002401D1 inclusive, contiguous, 476 bytes; evidence `ev_585d834a477d037d9b4636a067df18d764aabd040a71e3de410b5c9860b2083e`.
- Static Ghidra references: 1 caller sites, 1 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0023FFF6`, 476 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (476/476 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 476 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c43fc86fbd0e3d42d7814cc51473cce3b8e890a2cc7152ee19c9020c7142b053`; candidate object SHA-256: `88356f5e6f5099e131b4bd1b5cf649bd8f679b6764f9516886f3a976508ec105`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
