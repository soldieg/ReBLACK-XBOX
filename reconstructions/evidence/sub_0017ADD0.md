# sub_0017ADD0

- Function task: [#2501](https://github.com/soldieg/ReBLACK-XBOX/issues/2501).
- Batch: 24 (current ten-batch run: 2/10; 100 functions).
- Ghidra 12.1.3 body: 0x0017ADD0–0x0017AE08 inclusive, contiguous, 57 bytes; evidence `ev_2bdd14234f97e74a86ab5327e2fe02040c6c495b3634c1ad502f80dcb4469e47`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0017ADD0`, 57 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (57/57 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 57 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2d687880a2f186eaa104145eab0b2b06b691b260c41361894f9973426bc554a0`; candidate object SHA-256: `9bcc953e1eb69c57f8520f12664a5c34ad8b15d75cedb09cedb8e2ec6f4b70b2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
