# sub_0020BAC0

- Function task: [#3163](https://github.com/soldieg/ReBLACK-XBOX/issues/3163).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x0020BAC0â€“0x0020BB35 inclusive, contiguous, 118 bytes; evidence `ev_c41d0ee5cdb6a17401421ecd36c4c35881797afbbc8725a693b1742e8ba1b8e7`.
- Static Ghidra references: 0 caller sites, 7 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0020BAC0`, 118 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (118/118 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 118 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `08d90df39efb75d818060fbbe7f3477acd33cdc4d5886b08783522fa442684ed`; candidate object SHA-256: `ae5eef70c5cb9e2789ef0fc964ad1e5dcc012defa1ed41522d5868693dd3efd6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
