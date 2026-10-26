# sub_0023EC4D

- Function task: [#5629](https://github.com/soldieg/ReBLACK-XBOX/issues/5629).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0023EC4D-0x0023EE79 inclusive, contiguous, 557 bytes; evidence `ev_faaa89f025d1e5dbacd0036e6e1116e4d0710abf195c05f7ec7c032ce8eb0eed`.
- Static Ghidra references: 1 caller sites, 9 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0023EC4D`, 557 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (557/557 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 557 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f243fdf442ff78d537e1baeb79f649b8f6fe3e6740e849feacb620ee43d04be5`; candidate object SHA-256: `ee5836311cf922ee8f384480453e981ae898fa756ac89a2280efc8a60fa0276d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
