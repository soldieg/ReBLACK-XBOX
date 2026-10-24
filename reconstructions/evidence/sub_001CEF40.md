# sub_001CEF40

- Function task: [#2920](https://github.com/soldieg/ReBLACK-XBOX/issues/2920).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CEF40â€“0x001CF2A7 inclusive, contiguous, 872 bytes; evidence `ev_21c4b4497f7b026745a9e6f4c43e8ed5e5273dda198c80364b8d9e1afd28c0b8`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CEF40`, 872 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (872/872 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 872 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2600eff045465804b9879fa103975d41d3d59e1e2318461ad1d46e5088c1bf56`; candidate object SHA-256: `3851cc8232728d0a10437a608c0d45b33ed29d16b6a559d7869e94c5b9ec9cf7`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
