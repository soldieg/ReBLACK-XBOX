# sub_000DBBE0

- Function task: [#4346](https://github.com/soldieg/ReBLACK-XBOX/issues/4346).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DBBE0-0x000DBC5E inclusive, contiguous, 127 bytes; evidence `ev_c09d6e6bb7e55ea421b42999da341413b61f4cfd8b4833f9dd3d83fd5b15db3f`.
- Static Ghidra references: 3 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DBBE0`, 127 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (127/127 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 127 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `fe786d50bb3c041e9d89e1bac9e6295aa7fd984d446c7c894cddb5237d0f73d5`; candidate object SHA-256: `61e30956df4651d418c4110ff9c3eafddc95f11479b7606e76343c97dd9f87bc`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
