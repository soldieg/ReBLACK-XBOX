# sub_0009DDF2

- Function task: [#4021](https://github.com/soldieg/ReBLACK-XBOX/issues/4021).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009DDF2-0x0009DE6F inclusive, contiguous, 126 bytes; evidence `ev_253d148852db675d1bae0a9fa55a0cfb0ad42fdb145d693a719aff13afba9293`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009DDF2`, 126 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (126/126 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 126 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `33dcbe7dfd92d90fb02163c292f38f4048e0a8c123878bec36b3fac264f9a013`; candidate object SHA-256: `5b9a98543a9cf196388ab786f3d4e2025368507b843aaa5f6884fc0703baee4b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
