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

## Lot 99 revalidation — 2026-10-28

- Task: [#4021](https://github.com/soldieg/ReBLACK-XBOX/issues/4021).
- Fresh REA/Ghidra 12.1.3 body: 0x9ddf2–0x9de6f inclusive, contiguous, 126 bytes; analysis evidence `ev_253d148852db675d1bae0a9fa55a0cfb0ad42fdb145d693a719aff13afba9293`.
- Fresh REA byte read: complete 126/126 bytes; SHA-256 matches the named candidate; evidence `ev_abe0949715475749a9b827c318ee90c7c067ad9b9fd4cb87b3aa9d2e60ba25b4`.
- Static checks: XBE raw = derived PE = XboxRecomp split = candidate = compiled MSVC x86 bytes; 0 candidate/compiled relocations.
- MSVC 19.51.36260 x86 compile passed; ObjDiff 3.8.2: symbol 100.00%, section 100.00%.
- Resolved Ghidra references: 1 caller sites, 3 callee sites; unresolved calls: 0. Coverage: complete.
- Already marked `current-exact`; no dashboard candidate count increase. Address-pinned byte-emitter evidence only; semantic C, formal ABI, Xbox link, post-link XBE diff, runtime, and gameplay are not claimed.
