# sub_000F7AC0

- Function task: [#5909](https://github.com/soldieg/ReBLACK-XBOX/issues/5909).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xf7b0f, 0xf7b21, 0xf7b58, 0xf7b5f, 0xf7bec, 0xf7c0a, 0xf7c15; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000F7AC0-0x000F7C22 inclusive, contiguous, 355 bytes; evidence `ev_0ca4a14c5a885229543b8b2b9cafd994edbbb09150be9300422f8f57eb26f1ec`.
- Static Ghidra references: 1 caller sites, 6 resolved direct callees; call instructions without a resolved target: 7. These are not runtime observations.
- Resolved static callers: 0xf9170 (FUN_000f9170).
- Resolved direct callees: 0x180c0 (FUN_000180c0), 0xe1f80 (FUN_000e1f80), 0xe3930 (FUN_000e3930), 0xe5b20 (FUN_000e5b20), 0xe5ee0 (FUN_000e5ee0), 0xf3e20 (FUN_000f3e20).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 7 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000F7AC0`, 355 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (355/355 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 355 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7c49f370cf9e29effdc5126ef7c2280a8aa3ce7da68c6648be21c4b288a4ef98`; candidate object SHA-256: `4d1188b005fe37e6b473a6958bf4849f155568a1f3294ca729bb043e825bada5`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
