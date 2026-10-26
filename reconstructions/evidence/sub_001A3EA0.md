# sub_001A3EA0

- Function task: [#5152](https://github.com/soldieg/ReBLACK-XBOX/issues/5152).
- Batch: 49 (current 100-lot run: 49/100; 100 functions).
- Ghidra 12.1.3 body: 0x001A3EA0-0x001A402C inclusive, contiguous, 397 bytes; evidence `ev_bf6dac4718bf7495e8e92d187cefe7a9d8cce3c61a1b8d32b8ca934e1ba7981a`.
- Static Ghidra references: 0 caller sites, 13 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001A3EA0`, 397 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (397/397 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 397 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6de37f2dcc96b685ab29dc7597e73a86147d69323a8546aefc2bc9b1b704ddc5`; candidate object SHA-256: `36933e6b34fa91e8921f8999604e39f9546c28ead42319382b0c6f1d4da68aab`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
