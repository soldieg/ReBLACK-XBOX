# sub_0023EE7A

- Function task: [#5630](https://github.com/soldieg/ReBLACK-XBOX/issues/5630).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0023EE7A-0x0023F190 inclusive, contiguous, 791 bytes; evidence `ev_51daa2f308b7d68743c4990516b8fa90f40eef44b4288ec3d43b8471c3a47cd6`.
- Static Ghidra references: 1 caller sites, 5 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0023EE7A`, 791 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (791/791 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 791 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `da1e5008041a102088017ddce23fdff8bf8e807907a97b5026449bacfcf5bf32`; candidate object SHA-256: `91269f4d5c307843c68ef5dace4e58f0d0a7d5fde35c54d8b54ef753c83dee71`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
