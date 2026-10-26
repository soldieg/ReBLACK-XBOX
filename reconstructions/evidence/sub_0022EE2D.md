# sub_0022EE2D

- Function task: [#5616](https://github.com/soldieg/ReBLACK-XBOX/issues/5616).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0022EE2D-0x0022F402 inclusive, contiguous, 1494 bytes; evidence `ev_8c594862277be19c132b20051469d753d1ce46e31f640debdd78db780e7f087d`.
- Static Ghidra references: 0 caller sites, 4 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0022EE2D`, 1494 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1494/1494 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1494 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `67c95992f81712af295fa6bd4985edc11d4847fabe6a168d8d253019035ffdf4`; candidate object SHA-256: `c89259a2765c82f0c601065d8dff48da7fb9f245f977112c70839be4dd397b5f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
