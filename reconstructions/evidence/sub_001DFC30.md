# sub_001DFC30

- Function task: [#5274](https://github.com/soldieg/ReBLACK-XBOX/issues/5274).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DFC30-0x001DFD8E inclusive, contiguous, 351 bytes; evidence `ev_0b1b15bd0d61c75946df0cd624e41ad143564a197b661e9a3bfd4cbe6eb570cc`.
- Static Ghidra references: 0 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DFC30`, 351 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (351/351 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 351 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3d3fd08925ca93d64cf6b8b2162929e0a83f4a3fff3351e91a4c2b7e8d8075c5`; candidate object SHA-256: `5e880e17496374f0396af582befe31050cd6a84c27d4733270c75c9228d9b009`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
