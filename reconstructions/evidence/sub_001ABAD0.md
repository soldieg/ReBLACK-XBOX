# sub_001ABAD0

- Function task: [#2732](https://github.com/soldieg/ReBLACK-XBOX/issues/2732).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001ABAD0–0x001ABB18 inclusive, contiguous, 73 bytes; evidence `ev_128b0fedb1c98282f5f2c90955cb3677c3e50250f48be0d503a033b922211aa6`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001ABAD0`, 73 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (73/73 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 73 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4204ee6396eb6abab7feaa7f5068a05368fbd976a3e835a2d167aaaa6d689633`; candidate object SHA-256: `018653c6da7011c8e5d79c17a01f04f87215edfd16bf128c568fda84732da661`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
