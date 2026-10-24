# sub_001D4DC0

- Function task: [#2963](https://github.com/soldieg/ReBLACK-XBOX/issues/2963).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001D4DC0â€“0x001D4F02 inclusive, contiguous, 323 bytes; evidence `ev_eee0f69c093af6cd9d2c2a74960f4a56eb2f4d33969d95f32af6ef576b062325`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001D4DC0`, 323 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (323/323 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 323 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `aeab5bf4e73f722b1ad54339fbbd63299c9753503a0a2dd34da157b997c9e57b`; candidate object SHA-256: `3e07f64f0e94bd64195c986acaab76a1e280654cc7c7c4e0169f93f80560e186`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
