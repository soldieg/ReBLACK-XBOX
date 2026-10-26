# sub_001F3AC0

- Function task: [#3004](https://github.com/soldieg/ReBLACK-XBOX/issues/3004).
- Batch: 29 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x001F3AC0â€“0x001F3AF1 inclusive, contiguous, 50 bytes; evidence `ev_d3e68ad7fbd99ff8354f2200958ba1733ed0299996a5589223aa5d3bbda6b5d5`.
- Static Ghidra references: 10 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001F3AC0`, 50 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (50/50 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 50 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d601f9e00b8554f61b0c3c1705f4c47bedaab98c784fe07d3e7f60d73fa17fef`; candidate object SHA-256: `e76be44544efda9613e784467424254d9d71f4952284952d644d4311f49e577d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
