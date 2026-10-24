# sub_001CCFA0

- Function task: [#2904](https://github.com/soldieg/ReBLACK-XBOX/issues/2904).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CCFA0â€“0x001CD044 inclusive, contiguous, 165 bytes; evidence `ev_29d6dace025837a1c237dfea71f506941b1a1e628f0f009f75e5ad8fd6aefe11`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CCFA0`, 165 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (165/165 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 165 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a0807259cb544d6d1c3341829547e8c66ac5f98d3fe31c6b95b86dc966e870d2`; candidate object SHA-256: `27b578bd2f4f20641522a8606f9911f906244264d92657015d888c769dba9420`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
