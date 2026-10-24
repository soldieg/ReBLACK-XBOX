# sub_001CFBE0

- Function task: [#2929](https://github.com/soldieg/ReBLACK-XBOX/issues/2929).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CFBE0â€“0x001CFE38 inclusive, contiguous, 601 bytes; evidence `ev_eba9fa98b2ff3e67f7d045d0140aeef795a3138f1ad46cedfaf083a0fe602cae`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CFBE0`, 601 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (601/601 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 601 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `571f0f92c0874a0ae80f46b57bba1e18778ba0c1245b28eb29a481fc9733cf50`; candidate object SHA-256: `a35e636a75bd70e0c809fdad7848c820ec6bb8c82be8e4f8bdef571a6eea30f4`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
