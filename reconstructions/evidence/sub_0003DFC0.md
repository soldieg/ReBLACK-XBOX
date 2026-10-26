# sub_0003DFC0

- Function task: [#5693](https://github.com/soldieg/ReBLACK-XBOX/issues/5693).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: fuzzy; fuzzy candidate similarity: 22.81% (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0003DFC0-0x0003E1A5 inclusive, contiguous, 486 bytes; evidence `ev_688b208373123de941c2a87d26a8e3c7671537919fe778336d79cb19f2bd98ba`.
- Static Ghidra references: 4 caller sites, 5 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0003DFC0`, 486 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (486/486 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 486 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e3ba4b79e669a3cdb53ada9eb0b4daf48be6e5bf2929508505ce0701a32d71ac`; candidate object SHA-256: `35aa495513e3a4d26272de5ff5b1d40bc15ee4ef55fc51d32d961131192d01c9`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
