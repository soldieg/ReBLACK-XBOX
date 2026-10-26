# sub_000EAD30

- Function task: [#5880](https://github.com/soldieg/ReBLACK-XBOX/issues/5880).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xeae50; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000EAD30-0x000EAE67 inclusive, contiguous, 312 bytes; evidence `ev_d5d61070e9f7ceeacd9a00f29d4dba28702b43143f60df885d1b169221e3ad1e`.
- Static Ghidra references: 0 caller sites, 3 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: none reported.
- Resolved direct callees: 0xe3930 (FUN_000e3930), 0xe5b20 (FUN_000e5b20), 0xe6a80 (FUN_000e6a80).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000EAD30`, 312 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (312/312 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 312 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d1659a0f372dbf7e7ddfd46643a7dbd343d6d1086faf9f1ad5e0d75ef70018cf`; candidate object SHA-256: `3ff22a234604c84b44b13068ada0005a23ff7d66c0c489011090a62d1dfb73aa`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
