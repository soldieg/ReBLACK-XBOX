# sub_000CB2D0

- Function task: [#5844](https://github.com/soldieg/ReBLACK-XBOX/issues/5844).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xcb32e, 0xcb336, 0xcb342; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000CB2D0-0x000CB359 inclusive, contiguous, 138 bytes; evidence `ev_a24f16770874f1d87f8cdf30706f420a68160d72eae54a76411c6138e9a9906c`.
- Static Ghidra references: 10 caller sites, 2 resolved direct callees; call instructions without a resolved target: 3. These are not runtime observations.
- Resolved static callers: 0x143d80 (FUN_00143d80), 0x144960 (FUN_00144960), 0x145250 (FUN_00145250), 0x1457c0 (FUN_001457c0), 0x145d80 (FUN_00145d80), 0x14c510 (FUN_0014c510), 0x1503a0 (FUN_001503a0), 0x154010 (FUN_00154010), 0x154c70 (FUN_00154c70), 0x20b450 (FUN_0020b450).
- Resolved direct callees: 0xbf710 (FUN_000bf710), 0xbf7e0 (FUN_000bf7e0).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 3 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000CB2D0`, 138 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (138/138 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 138 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f2727fae18a4d852dc9e4aa7f68f43576a727ce4b55ad97453f5bc545a1df96d`; candidate object SHA-256: `d1b7bc70a063ca4f10ae1905e7bba46b565ded921f207a11574421a3dd68f438`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
