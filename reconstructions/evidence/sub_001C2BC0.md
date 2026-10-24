# sub_001C2BC0

- Function task: [#2829](https://github.com/soldieg/ReBLACK-XBOX/issues/2829).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001C2BC0–0x001C2C3E inclusive, contiguous, 127 bytes; evidence `ev_065fd4c008ba19a9f0c29d0c280ebf5aff35fc67f4b2caf65567533002cc3ebb`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001C2BC0`, 127 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (127/127 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 127 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `cd6bc102bff47fb397ed10a6146ee1fc7b819b0be3492f5395f96fd3688e0b31`; candidate object SHA-256: `1fea9c0324774fd2da41a4ffd4802ea9c0647da42de98da542b550227d4cb5ed`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
