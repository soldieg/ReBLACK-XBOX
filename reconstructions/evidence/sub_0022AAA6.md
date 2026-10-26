# sub_0022AAA6

- Function task: [#5585](https://github.com/soldieg/ReBLACK-XBOX/issues/5585).
- Batch: 53 (current 100-lot run: 53/100; 100 functions).
- Ghidra 12.1.3 body: 0x0022AAA6-0x0022AAE2 inclusive, contiguous, 61 bytes; evidence `ev_db2fc89085feb16e6cc9b6ba434dd0019067d7f46e9eb4a3bbfc29ab8a05f419`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0022AAA6`, 61 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (61/61 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 61 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `dda1f86b2e50913d5574e9150401cd27d94018b1b832b875c267c37d6bd44083`; candidate object SHA-256: `942f20fee557854b9d77396e047a98829e5cdb49d4debc3a6f42cb24722366d1`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
