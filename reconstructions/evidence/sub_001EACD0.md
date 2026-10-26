# sub_001EACD0

- Function task: [#5322](https://github.com/soldieg/ReBLACK-XBOX/issues/5322).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001EACD0-0x001EAF25 inclusive, contiguous, 598 bytes; evidence `ev_f86f21a524655c82f78a3e8d450fba0e1443eeee743f4e7ccde92d4ab3b38d4c`.
- Static Ghidra references: 0 caller sites, 9 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001EACD0`, 598 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (598/598 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 598 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9532b743355ae49df4c6c8e9995faf1a2708da561323d2ee9cc4aa2bc0c4fee6`; candidate object SHA-256: `bb8f3ace081461bb305d68ad3ccb77b972821ef5b344082ef413f50774fbede1`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
