# sub_000A28EE

- Function task: [#4071](https://github.com/soldieg/ReBLACK-XBOX/issues/4071).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A28EE-0x000A2A96 inclusive, contiguous, 425 bytes; evidence `ev_c5cd281560fbcf7473d26f347c09739a6308482f1009545d9650e4aa03b7f55e`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A28EE`, 425 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (425/425 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 425 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `337f25cc07263e7cc170c87e05c343c173c279b6dd927ac43eae73180c1eb881`; candidate object SHA-256: `bff3f754e41ed5c558bd6ef09d7ad1e69d08ea1baa9a26a21e2c1f61bb4b61c9`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
