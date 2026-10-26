# sub_000CFE40

- Function task: [#5852](https://github.com/soldieg/ReBLACK-XBOX/issues/5852).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xcfe6a; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000CFE40-0x000CFEA4 inclusive, contiguous, 101 bytes; evidence `ev_b55b6020258aa77128bef0644cce258fb800628b9adf5106a0e67d288d80ae67`.
- Static Ghidra references: 2 caller sites, 2 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: 0xcfe40 (FUN_000cfe40), 0xcfeb0 (FUN_000cfeb0).
- Resolved direct callees: 0xcc6c0 (FUN_000cc6c0), 0xcfe40 (FUN_000cfe40).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000CFE40`, 101 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (101/101 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 101 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `292158356ddb1a631a56980069735882ef9fba1b52401854a9e391a42950b4f5`; candidate object SHA-256: `30f38058cc053970211c1cfb1201f79a24e9127f00394201e3d62678fb126fcf`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
