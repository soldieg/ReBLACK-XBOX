# sub_001DEC20

- Function task: [#5269](https://github.com/soldieg/ReBLACK-XBOX/issues/5269).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DEC20-0x001DEC69 inclusive, contiguous, 74 bytes; evidence `ev_b4a1503bf35574776ebb0262ae3aebaf41ba2de91bcb060de727a6cd70bedeca`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DEC20`, 74 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (74/74 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 74 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7ab205c576829e3cfca951e3364efa618e7645f17e65a591b2ec4c9c29c6fa5d`; candidate object SHA-256: `726fa25e9c6a729b9f977935ec8bba8a897f58fef523197d32a547afa3fea4cb`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
