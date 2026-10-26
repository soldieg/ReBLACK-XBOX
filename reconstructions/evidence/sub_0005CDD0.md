# sub_0005CDD0

- Function task: [#5733](https://github.com/soldieg/ReBLACK-XBOX/issues/5733).
- Batch: 55 (current 100-lot run: 55/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0x5ce0f, 0x5ce26, 0x5ce3e, 0x5ce77, 0x5ce95, 0x5ceaa, 0x5cebe, 0x5ced2, 0x5cee6; destinations for listed sites remain unresolved; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x0005CDD0-0x0005CEF4 inclusive, contiguous, 293 bytes; evidence `ev_2fb718df5d258e35329314ead12cdec90611441f2d9ebeb52716abd5bc36581c`.
- Static Ghidra references: 0 caller sites, 2 resolved direct callees; call instructions without a resolved target: 9. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's callee inventory omits targets of 9 call reference(s) or decoded call(s) without destinations.
- Target candidate: `sub_0005CDD0`, 293 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (293/293 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; 99 new address-pinned emitters compiled without warnings; the pre-existing sub_00035DC0.c compiled with four MSVC C4100 unused-parameter warnings. No errors occurred.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 293 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `cdc787fc97d4cb30a6e21c9fcaf63cf80aad717f4ce0f343254e298e28fb013b`; candidate object SHA-256: `e4b4291e2c45648546b844a16b40ae09622ed6b8cb8a638682572bdfea04ac32`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
