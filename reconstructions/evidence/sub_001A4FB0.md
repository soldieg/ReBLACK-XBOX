# sub_001A4FB0

- Function task: [#5162](https://github.com/soldieg/ReBLACK-XBOX/issues/5162).
- Batch: 49 (current 100-lot run: 49/100; 100 functions).
- Ghidra 12.1.3 body: 0x001A4FB0-0x001A50F2 inclusive, contiguous, 323 bytes; evidence `ev_4ccf1a65e665f5a333fa3334bb623124b9ebb00d5b690376cdde43d5e38675c0`.
- Static Ghidra references: 0 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001A4FB0`, 323 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (323/323 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 323 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8bf6d71b033185160dcf28f1e75b94cb0e13f2e1b27210b5a2277c862b6fb31d`; candidate object SHA-256: `f12c096ddc4215164a0dfdc31ea7c3abc217cb5f5ed65b8228d469b641c9a281`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
