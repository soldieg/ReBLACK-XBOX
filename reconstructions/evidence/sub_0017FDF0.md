# sub_0017FDF0

- Function task: [#2530](https://github.com/soldieg/ReBLACK-XBOX/issues/2530).
- Batch: 24 (current ten-batch run: 2/10; 100 functions).
- Ghidra 12.1.3 body: 0x0017FDF0–0x00180048 inclusive, contiguous, 601 bytes; evidence `ev_52b1d2a97844c07a5a683c4d66620f94b4eb42ec37ffd2ee2d2c7422fc22e67f`.
- Static Ghidra references: 0 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0017FDF0`, 601 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (601/601 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 601 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f98eed742c1829a942f7ce2e01d097b86da2dfaf96064b0860687de0c54d92eb`; candidate object SHA-256: `1e4a5e351b917cceedd5ef9bb44a06765c148094c1116730df0bb81e6c59ff1b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
