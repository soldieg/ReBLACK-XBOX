# sub_0021CAEC

- Function task: [#5364](https://github.com/soldieg/ReBLACK-XBOX/issues/5364).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021CAEC-0x0021CAFC inclusive, contiguous, 17 bytes; evidence `ev_641e20513d2fccd6dc8dfc48e03f7f4217d025180f95ff4381c8e0fe14562f48`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021CAEC`, 17 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (17/17 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 17 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `b280708d4fc4be730b0d87e574718125a2999086ef13e3ef54e07dff7970d3a5`; candidate object SHA-256: `3090f6e33efb7e8a095ffa507e181236a2c8b002bad8d1b4a16007010f4a8658`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
