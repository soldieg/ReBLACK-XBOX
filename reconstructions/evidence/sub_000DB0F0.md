# sub_000DB0F0

- Function task: [#4340](https://github.com/soldieg/ReBLACK-XBOX/issues/4340).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DB0F0-0x000DB182 inclusive, contiguous, 147 bytes; evidence `ev_c8d034d5ca0fabd8f0403a9c6b0796dfae9dcada2bbece05c23f84525d1c1648`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DB0F0`, 147 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (147/147 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 147 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8f2854580f95c531e9159c9a37cc2c912fed49da752b016811de9a47fe154444`; candidate object SHA-256: `2ec90411f400449fd337dbd0de2984ac5f2f669a2daa47398caf123920f83982`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
