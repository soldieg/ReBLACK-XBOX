# sub_000AE8C0

- Function task: [#5810](https://github.com/soldieg/ReBLACK-XBOX/issues/5810).
- Batch: 55 (current 100-lot run: 55/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xaea37; destinations for listed sites remain unresolved; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000AE8C0-0x000AEB8A inclusive, contiguous, 715 bytes; evidence `ev_0428a1f46f7ffbeb7d186ce485890d1ad8a7812bf9560e216a91a0ad627ac06c`.
- Static Ghidra references: 1 caller sites, 11 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations.
- Target candidate: `sub_000AE8C0`, 715 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (715/715 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; 99 new address-pinned emitters compiled without warnings; the pre-existing sub_00035DC0.c compiled with four MSVC C4100 unused-parameter warnings. No errors occurred.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 715 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `622c07aca7cee360956895035cf7b622c815b9abcaade84d005c84d74833fb41`; candidate object SHA-256: `6c978a7992e5d6b4c28b8a6262bca32c0191b8a50dcc0a121e6c74f94bedbd3c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
