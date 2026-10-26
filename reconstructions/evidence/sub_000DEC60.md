# sub_000DEC60

- Function task: [#4361](https://github.com/soldieg/ReBLACK-XBOX/issues/4361).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DEC60-0x000DEF26 inclusive, contiguous, 711 bytes; evidence `ev_26a9c120ad6f4ae4155a7bf71fb1158d19dfcbab44fb33c7180c427da27a0a1f`.
- Static Ghidra references: 1 caller sites, 10 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DEC60`, 711 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (711/711 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 711 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `da8ea762761c097592868b8ddf1e945311790413c907343252176793ec578011`; candidate object SHA-256: `40385336f5eb3389e818183e56e00c6471344c8a75467cc8fae039ca9ffd9dd6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
