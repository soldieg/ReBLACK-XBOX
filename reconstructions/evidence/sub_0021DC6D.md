# sub_0021DC6D

- Function task: [#5392](https://github.com/soldieg/ReBLACK-XBOX/issues/5392).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021DC6D-0x0021DD5B inclusive, contiguous, 239 bytes; evidence `ev_79dfe999583e2c17d27decbc1e3f68e67edb6d4449a86b66130b27637b0ac265`.
- Static Ghidra references: 0 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021DC6D`, 239 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (239/239 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 239 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2b93f8c4e932c3b95d032265fc2903eb5566f64d7014ec7b6072e4e3caf39461`; candidate object SHA-256: `055205df310ea5236202b6673a6fa25291eec47ddaf681223c2557b6cab71287`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
