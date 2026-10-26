# sub_000AB2FB

- Function task: [#5808](https://github.com/soldieg/ReBLACK-XBOX/issues/5808).
- Batch: 55 (current 100-lot run: 55/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xab30e; destinations for listed sites remain unresolved; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000AB2FB-0x000AB328 inclusive, contiguous, 46 bytes; evidence `ev_28c3d09273612720bbf44a243b98875347434c3a01b43227497b5298951428c5`.
- Static Ghidra references: 0 caller sites, 1 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations.
- Target candidate: `sub_000AB2FB`, 46 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (46/46 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; 99 new address-pinned emitters compiled without warnings; the pre-existing sub_00035DC0.c compiled with four MSVC C4100 unused-parameter warnings. No errors occurred.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 46 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `70ef5727ad2c33906cd54443e64b615e3454c3a3ec433a1664906c7ca04ffa19`; candidate object SHA-256: `162cff736459835b074ea6f4938c29ac9c4818b22f615bdb958faf1da43b7223`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
