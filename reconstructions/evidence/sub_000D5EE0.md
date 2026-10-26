# sub_000D5EE0

- Function task: [#4307](https://github.com/soldieg/ReBLACK-XBOX/issues/4307).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000D5EE0-0x000D5FF9 inclusive, contiguous, 282 bytes; evidence `ev_64f57f53a512acd6c452d50cb8bdec29bfefeabe5657fbffeea8a3bc0e65b089`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000D5EE0`, 282 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (282/282 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 282 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2fc49eb6ae687ac722b718e0fcf23b5605e72d3671f452634d3096f3fcbdb122`; candidate object SHA-256: `21fa943f78ede34eb0bb876e23b0ee80368a9276f8b27cd5d8273211d70d9e41`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
