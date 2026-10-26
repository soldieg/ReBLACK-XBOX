# sub_000CAF40

- Function task: [#5842](https://github.com/soldieg/ReBLACK-XBOX/issues/5842).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xcaf7c, 0xcaf8d; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000CAF40-0x000CAF97 inclusive, contiguous, 88 bytes; evidence `ev_4d8cee81475bcbfd7fffee3eeee2ab0b23e12619be00c465d403146968d7693b`.
- Static Ghidra references: 1 caller sites, 2 resolved direct callees; call instructions without a resolved target: 2. These are not runtime observations.
- Resolved static callers: 0xcafd0 (FUN_000cafd0).
- Resolved direct callees: 0xc2c50 (FUN_000c2c50), 0xc2db0 (FUN_000c2db0).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 2 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000CAF40`, 88 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (88/88 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 88 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `286ff91bccea8b94b1f3088e12f948945397fe5b4ca6663a677b76f82a60c41a`; candidate object SHA-256: `3dc9f430434b801101e89937de70989b389d819232839d2dde790483457282cd`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
