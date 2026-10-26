# sub_001CA3C0

- Function task: [#2878](https://github.com/soldieg/ReBLACK-XBOX/issues/2878).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CA3C0â€“0x001CA44E inclusive, contiguous, 143 bytes; evidence `ev_5cd919d7474029fca7b0741eb8d6af5499e4c9ca036969c8c6ef9db641fcfe83`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CA3C0`, 143 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (143/143 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 143 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `920c99b595339631dd87d85cee323df0bccd00cea5476bd9d30182837fb732ae`; candidate object SHA-256: `9a72e6a493684114e6c05fc1289f5107a92111a9180539ecb9d0c46d6f11e37b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
