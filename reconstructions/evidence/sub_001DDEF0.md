# sub_001DDEF0

- Function task: [#5258](https://github.com/soldieg/ReBLACK-XBOX/issues/5258).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DDEF0-0x001DDF4E inclusive, contiguous, 95 bytes; evidence `ev_330a7b7b8e1d58fe731865ae65b6e623dd22be447b230584dada4d9e7c7c2dcc`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DDEF0`, 95 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (95/95 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 95 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `efb2f18aa39e14445a63985378f0a86c0a0ebf10a8150d24b68fa867c3d5ecd1`; candidate object SHA-256: `5a98720167d7299a1a24ae194faa85317d504d5fcbf4aa528e15e656db08467d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
