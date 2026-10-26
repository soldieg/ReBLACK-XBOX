# sub_000F3ED0

- Function task: [#5898](https://github.com/soldieg/ReBLACK-XBOX/issues/5898).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xf40df; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000F3ED0-0x000F4116 inclusive, contiguous, 583 bytes; evidence `ev_e5ca6b12733a95ad762af191d03257c56c7ac55585209cca0c4445e3434f79e4`.
- Static Ghidra references: 1 caller sites, 5 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: 0xf6f00 (FUN_000f6f00).
- Resolved direct callees: 0xe37b0 (FUN_000e37b0), 0xe3930 (FUN_000e3930), 0xe5400 (FUN_000e5400), 0xe5880 (FUN_000e5880), 0xf1d80 (FUN_000f1d80).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000F3ED0`, 583 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (583/583 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 583 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a176be7b0d66b9b8de3bd359250afbefe38aa4067a54a09f3786414f64fa1d87`; candidate object SHA-256: `024970497a482d3d09f7b4ebec3eb149d95e41065dad20f91dd41a0ec5eeb071`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
