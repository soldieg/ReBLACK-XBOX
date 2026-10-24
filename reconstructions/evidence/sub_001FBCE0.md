# sub_001FBCE0

- Function task: [#3082](https://github.com/soldieg/ReBLACK-XBOX/issues/3082).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FBCE0â€“0x001FBD74 inclusive, contiguous, 149 bytes; evidence `ev_54ae2eac4be1c4cab904d3a53456eca3f0cce8009d395a74ec3c1b00f2f40e7e`.
- Static Ghidra references: 20 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FBCE0`, 149 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (149/149 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 149 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3aab688fdfdd05949c73112b0e770dc927dfeb9b6fee5017d2084225697cbe12`; candidate object SHA-256: `31438c662caf0cd7759bb268cb56b58ecd29f4593338f6da8752993549bef8fa`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
