# sub_001CB0C0

- Function task: [#2884](https://github.com/soldieg/ReBLACK-XBOX/issues/2884).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CB0C0â€“0x001CB18E inclusive, contiguous, 207 bytes; evidence `ev_2abf050547c227426d0efc89da7532473100953d96b5483a427e5b9a0e0823bc`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CB0C0`, 207 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (207/207 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 207 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `5fc3278e3111a7aebcc372a28a8cce9805ae689aba800969176d9760d033daba`; candidate object SHA-256: `ffa634559d356971c90fc76ceefc6a0b0301ebfb4e527aac9b50d63d0d4f04df`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
