# sub_0027EFAC

- Function task: [#5669](https://github.com/soldieg/ReBLACK-XBOX/issues/5669).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0027EFAC-0x0027EFB8 inclusive, contiguous, 13 bytes; evidence `ev_5f703077ba0880008699454369da1f992290d6431992628fd1f26886b9c868c7`.
- Static Ghidra references: 5 caller sites, 0 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0027EFAC`, 13 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (13/13 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 13 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `14b7dabbee6551c34fa3688070b04fa5f7a9a52ff9946c4cc975455434916c99`; candidate object SHA-256: `41347747a75f90d65db6c077631a2f2fce30c9ed723402c8025c733284c41c18`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
