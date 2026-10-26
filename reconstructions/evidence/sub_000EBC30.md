# sub_000EBC30

- Function task: [#5886](https://github.com/soldieg/ReBLACK-XBOX/issues/5886).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xebdc5; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000EBC30-0x000EBDE6 inclusive, contiguous, 439 bytes; evidence `ev_21f2ae901fe7338dc7c3679e722c24c32044d60b14e4fde4bd3105350d3a7632`.
- Static Ghidra references: 0 caller sites, 2 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: none reported.
- Resolved direct callees: 0xe3930 (FUN_000e3930), 0xe69b0 (FUN_000e69b0).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000EBC30`, 439 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (439/439 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 439 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `223f6763fafab0ca7a4ad0451a9b7f6f1035c0e62ffde4727529a11d9c653b9c`; candidate object SHA-256: `179ecf21f0b6e1514d31ceffa93190083cbb9f43e1e2f9a84e14043c68e2decf`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
