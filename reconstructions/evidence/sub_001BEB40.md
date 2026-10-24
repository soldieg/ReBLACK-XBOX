# sub_001BEB40

- Function task: [#2800](https://github.com/soldieg/ReBLACK-XBOX/issues/2800).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001BEB40–0x001BEBC8 inclusive, contiguous, 137 bytes; evidence `ev_500a61a29efae5679d41e56997b3cff80a9440ba69bc701ab6cdc1435dbdd251`.
- Static Ghidra references: 13 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001BEB40`, 137 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (137/137 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 137 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `81f1278ce4d4782ca6ce6ad53a72aa1a5885b729031c0f1b34ca93e0dd37e7d9`; candidate object SHA-256: `321b9b1dea5d90a31b1e184d6dfc4db193ca3e28c281284e89f0f5fe04b16d7d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
