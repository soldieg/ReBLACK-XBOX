# sub_0021D1BD

- Function task: [#5375](https://github.com/soldieg/ReBLACK-XBOX/issues/5375).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021D1BD-0x0021D1DA inclusive, contiguous, 30 bytes; evidence `ev_91804b6edf93284c338fdbacd8ad79ff3c415858c82604dc42ba48ed52b11c9e`.
- Static Ghidra references: 4 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021D1BD`, 30 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (30/30 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 30 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `28a877ffd1f09723ce4b3cba1f2423d4bdb58dece2ec1713e6c1de785097fb7e`; candidate object SHA-256: `cfdd9a4726cb0140a42977acd65fc9dc26525be43b71d278b545450542d3b442`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
