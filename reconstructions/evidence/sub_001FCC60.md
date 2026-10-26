# sub_001FCC60

- Function task: [#3090](https://github.com/soldieg/ReBLACK-XBOX/issues/3090).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FCC60â€“0x001FCD04 inclusive, contiguous, 165 bytes; evidence `ev_aab497211c672ace9dc414139926412866d85145bf6198bb5afd4ce2809bbe62`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FCC60`, 165 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (165/165 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 165 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `eaeb0adbc1f172bbfcf12150354d89c7bec125d02642e4753de7b518671f5267`; candidate object SHA-256: `e5b6af1a078c71db5aa0a1b264f61a5487f873a65c9e4819c46a3f52d7a256c0`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
