# sub_001C6EF0

- Function task: [#2852](https://github.com/soldieg/ReBLACK-XBOX/issues/2852).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001C6EF0–0x001C6F87 inclusive, contiguous, 152 bytes; evidence `ev_19fac4da03f35c6fcd317822147f63e066f04180c3bf3a0887a5f47d76c29047`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001C6EF0`, 152 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (152/152 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 152 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `1ad42a0d239223747773293382ef979a0ef161d9b3f408e6fab361c41d600932`; candidate object SHA-256: `70f936956a60b8add406fd59c0801d4b827f934b27f7aacd02eccd48830a0316`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
