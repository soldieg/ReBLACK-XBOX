# sub_000CFEB0

- Function task: [#5851](https://github.com/soldieg/ReBLACK-XBOX/issues/5851).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xcff0a; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000CFEB0-0x000CFF24 inclusive, contiguous, 117 bytes; evidence `ev_18b8acbe00793e96bcd40db0632798c8daff0326d908bb28a9bf621458631e08`.
- Static Ghidra references: 4 caller sites, 2 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: 0x1d3af0 (FUN_001d3af0), 0x1d6dd0 (FUN_001d6dd0), 0x1d8d50 (FUN_001d8d50), 0x1daff0 (FUN_001daff0).
- Resolved direct callees: 0xcc6c0 (FUN_000cc6c0), 0xcfe40 (FUN_000cfe40).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000CFEB0`, 117 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (117/117 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 117 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a0dd50f90821c193e561c38a0fa21af246ed652f9785ed5f6ce998a3823190cf`; candidate object SHA-256: `402fba17afe43995c1205bd999c167e230f22b884c075b2122d7d62d24c8a918`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
