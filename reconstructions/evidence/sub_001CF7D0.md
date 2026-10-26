# sub_001CF7D0

- Function task: [#2927](https://github.com/soldieg/ReBLACK-XBOX/issues/2927).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CF7D0â€“0x001CFA38 inclusive, contiguous, 617 bytes; evidence `ev_edc7e5a38fd19d83f9a94e97983903721e5e6b1ec1a753f4bf8885666862322c`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CF7D0`, 617 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (617/617 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 617 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7efd7aefcdcb735ff7f7048717cf6e799634230a55b0c8e241587876af751d42`; candidate object SHA-256: `f5b8ae3bd274b398dc3baa52e464b11c3cd4c2a70aa791f78191b705eae63129`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
