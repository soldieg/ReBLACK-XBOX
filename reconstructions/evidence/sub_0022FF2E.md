# sub_0022FF2E

- Function task: [#5624](https://github.com/soldieg/ReBLACK-XBOX/issues/5624).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0022FF2E-0x0022FF88 inclusive, contiguous, 91 bytes; evidence `ev_033e8a6fbcdab965929291d1f1056efdf53d8a04056aae343a1e7328acb053ef`.
- Static Ghidra references: 1 caller sites, 0 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0022FF2E`, 91 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (91/91 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 91 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `603da3940a64f7f541cb23131737dfe775a8753442cc81093d63f7d9ac3a2b28`; candidate object SHA-256: `cd51461347c0e6048f4182b583e719404b1ad17ff71ba1366412c591a72a7483`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
