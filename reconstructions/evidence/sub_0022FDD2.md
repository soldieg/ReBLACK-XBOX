# sub_0022FDD2

- Function task: [#5622](https://github.com/soldieg/ReBLACK-XBOX/issues/5622).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0022FDD2-0x0022FEF7 inclusive, contiguous, 294 bytes; evidence `ev_cc29cc25c8b64b4cb647b0d7cacf26e59e4dfe663c80daf183b887df4ea93707`.
- Static Ghidra references: 1 caller sites, 2 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0022FDD2`, 294 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (294/294 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 294 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f016446909b1c244f9cfbf8f42799df3495fdac4b4e1bd258ae3b05e9c08b76b`; candidate object SHA-256: `1fee6cfeabe68cdb9b11236365861aa3e8420e15cee702371a1d43547752d43c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
