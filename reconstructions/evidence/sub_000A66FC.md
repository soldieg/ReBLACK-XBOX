# sub_000A66FC

- Function task: [#4113](https://github.com/soldieg/ReBLACK-XBOX/issues/4113).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A66FC-0x000A674C inclusive, contiguous, 81 bytes; evidence `ev_225258446cfa0cd4f253aacc88a5ba41a77a9a0c8911a7099e4ef607c844faa0`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A66FC`, 81 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (81/81 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 81 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `cc206c78c881594df54d5f2cbb45fd01e71f257426472f3fccda09e3032c4c5c`; candidate object SHA-256: `42c70026ba157f90ec7f2bd74c720d5fbb6feaaff222b079d44554a9e3c9b1c9`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
