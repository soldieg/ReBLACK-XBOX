# sub_000EAAB0

- Function task: [#5878](https://github.com/soldieg/ReBLACK-XBOX/issues/5878).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xeabd0; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000EAAB0-0x000EABE7 inclusive, contiguous, 312 bytes; evidence `ev_0340246146ffbd490b6c80a533f45030627a21396792b440f34a4cbb19b7a0c2`.
- Static Ghidra references: 0 caller sites, 3 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: none reported.
- Resolved direct callees: 0xe3930 (FUN_000e3930), 0xe5b20 (FUN_000e5b20), 0xe6a80 (FUN_000e6a80).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000EAAB0`, 312 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (312/312 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 312 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0928e5587f75bce4feeba7151f0c232902955482a2ad8a39d6ccf9170ced4da7`; candidate object SHA-256: `39da8c9c33a4a08203feb46500489050412230b2e8c3515433bd2d47b64f390f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
