# sub_000EAE70

- Function task: [#5881](https://github.com/soldieg/ReBLACK-XBOX/issues/5881).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xeb07c; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000EAE70-0x000EB092 inclusive, contiguous, 547 bytes; evidence `ev_8ab550f9d43a5d4929e5f8df7c6aa5f8d9db0f1de7b4fb3895f6f2bb7cf429ef`.
- Static Ghidra references: 0 caller sites, 3 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: none reported.
- Resolved direct callees: 0xe3930 (FUN_000e3930), 0xe69b0 (FUN_000e69b0), 0xe6a80 (FUN_000e6a80).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000EAE70`, 547 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (547/547 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 547 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `df9cdfd158d0d8dc0d275fcc3aa3c1eb793292ed88a326d35b0949601b7b34bd`; candidate object SHA-256: `eb4187eaddaa3585277377c244b82bd4b735ef89f0d7fa5c3195bdf445dae08a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
