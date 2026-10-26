# sub_001F2DC0

- Function task: [#2986](https://github.com/soldieg/ReBLACK-XBOX/issues/2986).
- Batch: 29 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x001F2DC0â€“0x001F2E10 inclusive, contiguous, 81 bytes; evidence `ev_f9f3580dda9f58e5d52f604242ebaa8e75c2feb95543a52bf137113d562b0aee`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001F2DC0`, 81 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (81/81 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 81 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0c94f9b6f5525fe5ea91e6a3174dd94b1c81fb748a4fc3cfe62c36cb72845d9d`; candidate object SHA-256: `8429a4c659f7da6db12dfa7f7de20cb2e3f5176d441bd2fd37e0ca9a5fe19674`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
