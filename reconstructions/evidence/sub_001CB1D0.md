# sub_001CB1D0

- Function task: [#2885](https://github.com/soldieg/ReBLACK-XBOX/issues/2885).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CB1D0â€“0x001CB26B inclusive, contiguous, 156 bytes; evidence `ev_bf3d5a5385870a722727db4310afc937458f70bd6c999ed38014993d895a1d46`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CB1D0`, 156 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (156/156 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 156 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `42bf84a2ed328fa81bdf1e50aba625bbb732e7c9958dcac022c7f1e82a160092`; candidate object SHA-256: `bf3d36fbeeeed34294012e18454ed3361332c95fe02739ef3566d66f1b4b3302`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
