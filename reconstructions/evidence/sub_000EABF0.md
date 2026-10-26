# sub_000EABF0

- Function task: [#5879](https://github.com/soldieg/ReBLACK-XBOX/issues/5879).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xead10; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000EABF0-0x000EAD27 inclusive, contiguous, 312 bytes; evidence `ev_10b073b080edb1c5273aaf3f9d52ba664e6ea1f603e80df1fbfbb838768fdfe1`.
- Static Ghidra references: 0 caller sites, 3 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: none reported.
- Resolved direct callees: 0xe3930 (FUN_000e3930), 0xe5b20 (FUN_000e5b20), 0xe6a80 (FUN_000e6a80).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000EABF0`, 312 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (312/312 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 312 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `af9bddc1f25f99b4293bb5d52c4109f2a0bddfbf5a961a3ee0899be68ad0c4c1`; candidate object SHA-256: `aa4faaff36750c0b988848bd6530efb84a907f6a0e9b2d4c4306512bf3ccf8be`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
