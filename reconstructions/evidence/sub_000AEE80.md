# sub_000AEE80

- Function task: [#4972](https://github.com/soldieg/ReBLACK-XBOX/issues/4972).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x000AEE80-0x000AEE94 inclusive, contiguous, 21 bytes; evidence `ev_097177d7e69627c3c056fbd497d28852771ee58ba468fe915f5f7f4ecdd97321`.
- Static Ghidra references: 3 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_000AEE80`, 21 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (21/21 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 21 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3c233eb764d55ad562cc15b5550ccfd5fd09e956d3f2040b7229a5e1e78e288e`; candidate object SHA-256: `a2063777a3a4caca4af11509fb743967e41c33f21f0f1fe42ea367abf649d1e2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
