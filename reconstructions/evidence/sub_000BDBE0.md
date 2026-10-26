# sub_000BDBE0

- Function task: [#5835](https://github.com/soldieg/ReBLACK-XBOX/issues/5835).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xbdc25; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000BDBE0-0x000BDC3B inclusive, contiguous, 92 bytes; evidence `ev_da170cc77c0982266c9ea3e6fbbcca9327706060b6cbd04b1826a26400a2a2ab`.
- Static Ghidra references: 2 caller sites, 1 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: 0x150600 (FUN_00150600), 0x153a10 (FUN_00153a10).
- Resolved direct callees: 0xbd380 (FUN_000bd380).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000BDBE0`, 92 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (92/92 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 92 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `5221f24de910c361d26158ecb2962c4592211fc9210edce5be6648f918593ed3`; candidate object SHA-256: `83770cee5aa24f9901d9a9db3312b953f3d4d367216e063ff91c5cb695cc0637`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
