# sub_001CBF40

- Function task: [#2893](https://github.com/soldieg/ReBLACK-XBOX/issues/2893).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CBF40â€“0x001CC05C inclusive, contiguous, 285 bytes; evidence `ev_25e60891a485e0d4941dc9f557bf41916bf470db06c7b3a26d782dcd21f32782`.
- Static Ghidra references: 3 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CBF40`, 285 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (285/285 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 285 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `aeb6b66856acb1a107080d39bce4c57486f402f20ed99186acbac8fdeeed562f`; candidate object SHA-256: `96acdd0d06099c7efecaceb26c4fb968f557879e0e5bbe7fbbe8713c254c3813`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
