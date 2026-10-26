# sub_000F5DD0

- Function task: [#5904](https://github.com/soldieg/ReBLACK-XBOX/issues/5904).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xf5dd9; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000F5DD0-0x000F5E29 inclusive, contiguous, 90 bytes; evidence `ev_98e3606423b2f22c07b099dc4c5c7e616bba46515c16a79eefd136f4cd09092e`.
- Static Ghidra references: 1 caller sites, 1 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: 0x10e500 (FUN_0010e500).
- Resolved direct callees: 0xf49d0 (FUN_000f49d0).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000F5DD0`, 90 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (90/90 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 90 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e98b9a0a0198d94e283e5a1d299474e782911687452d89654e7fa7169b31944a`; candidate object SHA-256: `b4618c3d3d68e84ca586cff61d7301360010ded4e12287fb1237888ba7b98634`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
