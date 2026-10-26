# sub_001ADE70

- Function task: [#2751](https://github.com/soldieg/ReBLACK-XBOX/issues/2751).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001ADE70–0x001AE074 inclusive, contiguous, 517 bytes; evidence `ev_1a0365278e1de4806fc2f626097bb9c1bf459e76da0a38c65ff5d3f4ee8f42ff`.
- Static Ghidra references: 4 caller sites, 7 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001ADE70`, 517 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (517/517 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 517 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `60e8dea8b3f4acb36f1454bede13bf1a824bb74f647371708c27081b52d8730e`; candidate object SHA-256: `dbfa1a20ef5bb3f59db3c345b06b5c55053b4e3af16e3ba944f8fca5a0d52308`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
