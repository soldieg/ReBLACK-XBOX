# sub_000D3DF0

- Function task: [#5860](https://github.com/soldieg/ReBLACK-XBOX/issues/5860).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xd3e02, 0xd3e31, 0xd3ef0, 0xd4313, 0xd4343, 0xd435d; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000D3DF0-0x000D43AF inclusive, contiguous, 1472 bytes; evidence `ev_dac9858f4d268702d6fd55faea0d1859aba2e4d54278306d18c218b7002f6460`.
- Static Ghidra references: 0 caller sites, 8 resolved direct callees; call instructions without a resolved target: 6. These are not runtime observations.
- Resolved static callers: none reported.
- Resolved direct callees: 0x2f880 (FUN_0002f880), 0x308c0 (FUN_000308c0), 0x30af0 (FUN_00030af0), 0xa1aeb (_sprintf), 0xa34d4 (FUN_000a34d4), 0x2695f0 (FUN_002695f0), 0x26cdc0 (FUN_0026cdc0), 0x26eaf0 (FUN_0026eaf0).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 6 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000D3DF0`, 1472 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1472/1472 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1472 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `626a4f6af83750111439e2381d5b8deea3ac266298dc8e43f30104db6878a564`; candidate object SHA-256: `248058b3aeb2c872e7613b444f6d82688222c484307885c69f3326998f8b3557`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
