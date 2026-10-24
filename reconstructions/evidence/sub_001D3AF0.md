# sub_001D3AF0

- Function task: [#2959](https://github.com/soldieg/ReBLACK-XBOX/issues/2959).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001D3AF0â€“0x001D3C95 inclusive, contiguous, 422 bytes; evidence `ev_f63e37116571a8c613eb59e4c26138284a5e6f963d5075b000a4c6961ab931f1`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001D3AF0`, 422 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (422/422 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 422 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c24bb5250b9526b103640b4791a33e12d60de180ba0e0c68b15ef59be5d9b9f8`; candidate object SHA-256: `63c163bb3f5fa051a2ab5f20135c07856f8b4d38850201a26cefa01d55527fbe`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
