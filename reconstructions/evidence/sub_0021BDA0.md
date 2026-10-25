# sub_0021BDA0

- Function task: [#4471](https://github.com/soldieg/ReBLACK-XBOX/issues/4471).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021BDA0-0x0021BE08 inclusive, contiguous, 105 bytes; evidence `ev_aff1a34a69e5551407e9af5b5a30a4f22d574c90adf3e7b48301cd9179fddabf`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021BDA0`, 105 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (105/105 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 105 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2d71cb492ae2a294aaafb3fa50eff99287fc0ad8765810544c3977591da06f3f`; candidate object SHA-256: `5d8b8f3f43d6a5f812532627d9ceb89bced9544769cdbe5fc4e25a56c3116759`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
