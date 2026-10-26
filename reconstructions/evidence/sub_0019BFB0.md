# sub_0019BFB0

- Function task: [#5070](https://github.com/soldieg/ReBLACK-XBOX/issues/5070).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x0019BFB0-0x0019C0D3 inclusive, contiguous, 292 bytes; evidence `ev_3b07d534a20704e3fab8b9e27ced6968ebdca583c183326d121952d792760c8e`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0019BFB0`, 292 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (292/292 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 292 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `774175b51de9a8fd84430791f9f20bd5586f7e7a25b6506ae5359b13793f3158`; candidate object SHA-256: `e132acfe2043367d271156b37dc989e0a25eef4ddd5796ac6ce677ac6a4fcffd`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
