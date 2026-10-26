# sub_0022FBC0

- Function task: [#5620](https://github.com/soldieg/ReBLACK-XBOX/issues/5620).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0022FBC0-0x0022FCD2 inclusive, contiguous, 275 bytes; evidence `ev_32b79ab88b0ae67b960e542842282ad1a7df1ad338391d22e60e3f6c36b045dd`.
- Static Ghidra references: 1 caller sites, 0 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0022FBC0`, 275 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (275/275 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 275 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `25a15844940575b5292dcc6d7224fd1a484d9757286c67aa46fa8e6c8f2f750a`; candidate object SHA-256: `35264fedf8587ea2c469a6ce65ccdb8f3017e3de09b30142dc7584ad1a1d2669`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
