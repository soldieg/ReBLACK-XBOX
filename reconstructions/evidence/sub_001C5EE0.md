# sub_001C5EE0

- Function task: [#2847](https://github.com/soldieg/ReBLACK-XBOX/issues/2847).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001C5EE0–0x001C5F3D inclusive, contiguous, 94 bytes; evidence `ev_d9a8a9254956c035fdac2805470f1894df4630c88a4bc63b7f72eb83277904f4`.
- Static Ghidra references: 3 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001C5EE0`, 94 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (94/94 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 94 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `946a0ef0d1e86dc7d6b68529f04556eaae6b46573a12952a37e5fa85d768c2d1`; candidate object SHA-256: `216e85d9c0092986e9538e10b9e507c666359797db10fc396e54152b7f7a3aa7`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
