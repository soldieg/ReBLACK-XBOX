# sub_0022FCD3

- Function task: [#5621](https://github.com/soldieg/ReBLACK-XBOX/issues/5621).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0022FCD3-0x0022FDD1 inclusive, contiguous, 255 bytes; evidence `ev_75cc5032b222b449cf038091c0d48a245b571ca33b1e188c99dcfc5bb3a15648`.
- Static Ghidra references: 1 caller sites, 0 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0022FCD3`, 255 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (255/255 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 255 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3fe8b1fde835db7ad74530cd3eb15feea98f9a5742bb5382aadd3506cdbb6b00`; candidate object SHA-256: `88d323d0ecd215b247991ccf3990f692d6bfab4f65faad9fe5eccb6cf1e419c5`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
