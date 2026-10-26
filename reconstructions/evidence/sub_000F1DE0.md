# sub_000F1DE0

- Function task: [#5892](https://github.com/soldieg/ReBLACK-XBOX/issues/5892).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xf1dfc, 0xf1e1c, 0xf1e6d; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000F1DE0-0x000F1E9E inclusive, contiguous, 191 bytes; evidence `ev_f00ea1ec8efccf53d83866b96c9a3c7d0932aa7286e01a696f4aa1d31ef43c2b`.
- Static Ghidra references: 3 caller sites, 2 resolved direct callees; call instructions without a resolved target: 3. These are not runtime observations.
- Resolved static callers: 0xf59d0 (FUN_000f59d0), 0xf5a90 (FUN_000f5a90), 0xf5c40 (FUN_000f5c40).
- Resolved direct callees: 0xe5880 (FUN_000e5880), 0xf16c0 (FUN_000f16c0).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 3 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000F1DE0`, 191 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (191/191 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 191 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `083966cde29d7a0328d8bf7843bcedede6dcbb7aeddf65a10cb2a178e9f47a48`; candidate object SHA-256: `874af36850b3f42f4063600c750fca8fc37ac408dbdebd1ac7a478a7a86d0731`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
