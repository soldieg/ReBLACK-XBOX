# sub_000BEA30

- Function task: [#5837](https://github.com/soldieg/ReBLACK-XBOX/issues/5837).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: fuzzy; fuzzy candidate similarity: 46.48% (not ObjDiff).
- Ghidra unresolved call sites: none reported; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000BEA30-0x000BEA79 inclusive, contiguous, 74 bytes; evidence `ev_cd39bc0eaeb7a46763c4619f57c70b0a79e73bdf8f0efd62eba26732c0a2bb69`.
- Static Ghidra references: 3 caller sites, 0 resolved direct callees; call instructions without a resolved target: 0. These are not runtime observations.
- Resolved static callers: 0x13d20 (FUN_00013d20), 0x1fb250 (FUN_001fb250), 0x1fd780 (FUN_001fd780).
- Resolved direct callees: none reported.
- Call relationship coverage: complete; limits: none recorded.
- Target candidate: `sub_000BEA30`, 74 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (74/74 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 74 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d7a13b8c726bd90b68e0dafaf75c0e16a736378338891ca3b4ca82f67b37236b`; candidate object SHA-256: `3186095a50148393327c2a2e8632f64e6a00de991c8cf56a74cf8e0414cb3984`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
