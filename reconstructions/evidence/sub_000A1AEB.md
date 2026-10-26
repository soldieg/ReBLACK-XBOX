# sub_000A1AEB

- Function task: [#5794](https://github.com/soldieg/ReBLACK-XBOX/issues/5794).
- Batch: 55 (current 100-lot run: 55/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: none reported; destinations for listed sites remain unresolved; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000A1AEB-0x000A1B42 inclusive, contiguous, 88 bytes; evidence `ev_1ce1d44da5cbdf1077d43e4ced570572d7b88577679e0896a6b5c84f78c06161`.
- Static Ghidra references: 103 caller sites, 2 resolved direct callees; call instructions without a resolved target: 0. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's caller inventory omits sources of 29 call reference(s) into this function's body.
- Target candidate: `sub_000A1AEB`, 88 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (88/88 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; 99 new address-pinned emitters compiled without warnings; the pre-existing sub_00035DC0.c compiled with four MSVC C4100 unused-parameter warnings. No errors occurred.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 88 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2df318e3b02751a0b64fc7876b899380116d3ffe29da862becdc3d0827e2986f`; candidate object SHA-256: `7a7414784e15c90751a5be8fd2a32553802318d40a247dc8dc74a6e4cc50a41d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
