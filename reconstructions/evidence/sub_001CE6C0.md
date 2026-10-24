# sub_001CE6C0

- Function task: [#2913](https://github.com/soldieg/ReBLACK-XBOX/issues/2913).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CE6C0â€“0x001CE781 inclusive, contiguous, 194 bytes; evidence `ev_c9fcd310034d0502ebae3f0de3871150839bfd7bf3907986225ca25ff74fde6e`.
- Static Ghidra references: 24 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CE6C0`, 194 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (194/194 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 194 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4d682aed05dd4c55b4b9d39aa0098564ea094dae55eca5a19781197b12ee294b`; candidate object SHA-256: `7377358a65c81d4b70977f7427e866da177981f3bc6059986ed37f1e60e07d13`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
