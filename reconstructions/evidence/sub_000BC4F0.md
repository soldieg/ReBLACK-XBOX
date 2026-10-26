# sub_000BC4F0

- Function task: [#5831](https://github.com/soldieg/ReBLACK-XBOX/issues/5831).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xbc51c, 0xbc52c, 0xbc563, 0xbc58f, 0xbc5b1, 0xbc5c0, 0xbc5d5, 0xbc5e4, 0xbc5f8, 0xbc608, 0xbc627, 0xbc655, 0xbc660, 0xbc695, 0xbc6b1, 0xbc6d7, 0xbc6f9, 0xbc766, 0xbc776, 0xbc798; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000BC4F0-0x000BC846 inclusive, contiguous, 855 bytes; evidence `ev_101d4de2989a48de291835ae7da034e450ef747f88c06cccf122186a858d8fe0`.
- Static Ghidra references: 4 caller sites, 2 resolved direct callees; call instructions without a resolved target: 20. These are not runtime observations.
- Resolved static callers: 0xbd490 (FUN_000bd490), 0x14e960 (FUN_0014e960), 0x14f310 (FUN_0014f310), 0x1516b0 (FUN_001516b0).
- Resolved direct callees: 0x80540 (FUN_00080540), 0xbbcf0 (FUN_000bbcf0).
- Call relationship coverage: partial; limits: Ghidra's caller inventory omits sources of 1 call reference(s) into this function's body.; Ghidra's callee inventory omits targets of 20 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000BC4F0`, 855 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (855/855 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 855 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3bb275537397c9115b0fb98d52f39bc922c1dc5537f3a9cba0bbd1eefbac4e7a`; candidate object SHA-256: `4c91005911ec89566130affa3891631a4b60588bbef14c9f46cd7232556a5e01`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
