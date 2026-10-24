# sub_001AC1B0

- Function task: [#2738](https://github.com/soldieg/ReBLACK-XBOX/issues/2738).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AC1B0–0x001AC3EF inclusive, contiguous, 576 bytes; evidence `ev_1cb63e269fd3ec0144c41ba736d481938906d0a90f52de0e50fa0cb5806f532f`.
- Static Ghidra references: 1 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AC1B0`, 576 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (576/576 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 576 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `83e9f09486c3e731fada3b0c173c30898ead26687a5973a90fbf550771223abd`; candidate object SHA-256: `2f5dbfba8a53216d3289ce42f9c71ce4631bc3d226dfe76065da3c1541d567a6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
