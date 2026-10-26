# sub_0013EDC0

- Function task: [#4424](https://github.com/soldieg/ReBLACK-XBOX/issues/4424).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0013EDC0-0x0013EDDA inclusive, contiguous, 27 bytes; evidence `ev_f83c6c11f27172e3cff5a7329e7bcfc817b801b8f438fa3695ac4f91a06c0fa7`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0013EDC0`, 27 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (27/27 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 27 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `11fbfa756e125d4d523c42ff8eb4a2cdecc06ce6471f6c66abb2dcd35936f3d9`; candidate object SHA-256: `83a9e350ea4e0b1f083e8971b0bd83245e132bd1bf7943fb580d95c239872f30`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
