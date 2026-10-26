# sub_0027DF5A

- Function task: [#3508](https://github.com/soldieg/ReBLACK-XBOX/issues/3508).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027DF5Aâ€“0x0027DFA9 inclusive, contiguous, 80 bytes; evidence `ev_0f8df5eaf41d9916b3734c862c36cf0bdbca2c2c6e01b196010ca1422ad851f0`.
- Static Ghidra references: 3 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027DF5A`, 80 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (80/80 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 80 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7e2c8c75847e97b989c42fc130542eeeeeb7cb67fde426b2ac44db69d106b79e`; candidate object SHA-256: `7dff6c93401496e62673568b6fa9886d1a9e16a557198f06b72c406072e6ea35`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
