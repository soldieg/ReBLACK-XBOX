# sub_001FCA80

- Function task: [#3088](https://github.com/soldieg/ReBLACK-XBOX/issues/3088).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FCA80â€“0x001FCACE inclusive, contiguous, 79 bytes; evidence `ev_aa8008ed3ad771904fecdd91b00ed1e04850c16cc8171e2d8039c1f45ea16cb3`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FCA80`, 79 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (79/79 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 79 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e4a91fd0fae496ea651e4726ed0ae7b8ed57d12aed7dbb077f865ef37c3fe758`; candidate object SHA-256: `323cde8b51680103c85e4a360404a31e34b2e45035989c17852b0a60a5e13d3f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
