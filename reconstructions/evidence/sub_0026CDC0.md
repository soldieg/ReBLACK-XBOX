# sub_0026CDC0

- Function task: [#5658](https://github.com/soldieg/ReBLACK-XBOX/issues/5658).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0026CDC0-0x0026CEFE inclusive, contiguous, 319 bytes; evidence `ev_1572103c89e05446a12d60ddcab910b394814173d8b3adcd1efed9776f8353fd`.
- Static Ghidra references: 65 caller sites, 4 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0026CDC0`, 319 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (319/319 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 319 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8a0d14a7657db8c44ae38b80606a16f112a45189b70acb0bb2662b508d717389`; candidate object SHA-256: `321a4a6b43f2fe5a2fdc7e320131eeacbd56056d77226eec7c7c5646bd8c4679`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
