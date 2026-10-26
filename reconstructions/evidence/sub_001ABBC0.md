# sub_001ABBC0

- Function task: [#2735](https://github.com/soldieg/ReBLACK-XBOX/issues/2735).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001ABBC0–0x001ABCB5 inclusive, contiguous, 246 bytes; evidence `ev_8de976d8f60af6439b4c322d8fe301f83bb636d1422a5c9081ec4541afe3684d`.
- Static Ghidra references: 0 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001ABBC0`, 246 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (246/246 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 246 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4663f69fe94f2eecf19c58e18329787d49a6d63bb22056a487c7df03901a93d2`; candidate object SHA-256: `7a2804e753d1adfeb01b22a8eb5381c12dbb8f1e8562c11d24b9d96a59616cee`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
