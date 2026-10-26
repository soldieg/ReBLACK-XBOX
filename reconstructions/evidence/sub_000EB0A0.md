# sub_000EB0A0

- Function task: [#5883](https://github.com/soldieg/ReBLACK-XBOX/issues/5883).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xeb2ac; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000EB0A0-0x000EB2C2 inclusive, contiguous, 547 bytes; evidence `ev_125bbe8d18a6e2a4b396e3f235825f6f62e89be95ec6b6e05a6bdca46261544e`.
- Static Ghidra references: 0 caller sites, 3 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: none reported.
- Resolved direct callees: 0xe3930 (FUN_000e3930), 0xe69b0 (FUN_000e69b0), 0xe6a80 (FUN_000e6a80).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000EB0A0`, 547 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (547/547 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 547 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `cd5209774f7eb5bf00da8c200d6427012d8670c0e8cfa7309c2219bfec909479`; candidate object SHA-256: `2a2c29776782c4220a943c96e12d3b5e4faecc24b1d3e3c6a34076304aed9282`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
