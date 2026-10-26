# sub_0023EBB4

- Function task: [#5628](https://github.com/soldieg/ReBLACK-XBOX/issues/5628).
- Batch: 54 (current 100-lot run: 54/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved computed/indirect call sites: none reported; destinations for listed sites remain unknown.
- Ghidra 12.1.3 body: 0x0023EBB4-0x0023EC4C inclusive, contiguous, 153 bytes; evidence `ev_b406e85284671a31a5142185e97bc945df701bf4d1a02a4434a391861db398fe`.
- Static Ghidra references: 0 caller sites, 2 resolved direct callees; unresolved indirect call instructions: 0. These are not runtime observations.
- Relationship coverage: direct relationship counts recorded; computed/indirect call destinations remain unresolved where listed; limitations: none recorded.
- Target candidate: `sub_0023EBB4`, 153 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (153/153 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 153 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e6a9cada3b9dc1ef374cbabb68613c91a0abf44f255c290019cc4d0231e95c1b`; candidate object SHA-256: `08b5a6c4ffa12243975829ee28a6d9521afc89bf04f95759df590fe774e76668`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
