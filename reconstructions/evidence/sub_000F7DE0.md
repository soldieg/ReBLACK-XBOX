# sub_000F7DE0

- Function task: [#5910](https://github.com/soldieg/ReBLACK-XBOX/issues/5910).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xf7fd1, 0xf7ff3, 0xf7ffe, 0xf8031, 0xf8053, 0xf805e, 0xf8091, 0xf80b3, 0xf80be, 0xf8111; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000F7DE0-0x000F8123 inclusive, contiguous, 836 bytes; evidence `ev_54a67af6aa1a69c194bd6902a6d1a1bf1160614f1bbf44ef4700a90ca723785e`.
- Static Ghidra references: 2 caller sites, 3 resolved direct callees; call instructions without a resolved target: 10. These are not runtime observations.
- Resolved static callers: 0xf56e0 (FUN_000f56e0), 0xf8130 (FUN_000f8130).
- Resolved direct callees: 0xa1c8c (__stricmp), 0xe5880 (FUN_000e5880), 0xf56e0 (FUN_000f56e0).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 10 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000F7DE0`, 836 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (836/836 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 836 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `da9e78815b11b85beb85e97b7c1b090aa326051c901a5619b70debbcec2f95d4`; candidate object SHA-256: `194a78553bddcb9c1cd91e68e3ab2b5cd88dfb6ac6241219d3b6089ec1884d27`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
