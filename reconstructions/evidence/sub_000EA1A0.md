# sub_000EA1A0

- Function task: [#5876](https://github.com/soldieg/ReBLACK-XBOX/issues/5876).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xea1ee, 0xea40e; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000EA1A0-0x000EA426 inclusive, contiguous, 647 bytes; evidence `ev_f26353e1719bf14fb403190752e101c09210ee2445f9524680e1afb6d92df676`.
- Static Ghidra references: 0 caller sites, 4 resolved direct callees; call instructions without a resolved target: 2. These are not runtime observations.
- Resolved static callers: none reported.
- Resolved direct callees: 0xe3930 (FUN_000e3930), 0xe5b20 (FUN_000e5b20), 0xe69b0 (FUN_000e69b0), 0xe6a80 (FUN_000e6a80).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 2 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000EA1A0`, 647 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (647/647 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 647 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c5bb9bd8c80a604d8b1e80ce0a7ffea54b209783aac223ccf3244c3d08f962fd`; candidate object SHA-256: `ee19221f9e902b5b945613857a618f1f3ac5f461a05c8d2ceb0142d34008e420`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
