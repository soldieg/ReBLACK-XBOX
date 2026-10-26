# sub_0027FC2D

- Function task: [#3543](https://github.com/soldieg/ReBLACK-XBOX/issues/3543).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027FC2Dâ€“0x0027FC60 inclusive, contiguous, 52 bytes; evidence `ev_367d637ecb44f70e351f9e935af05f2144d34af154036cf20a0f9977b3ebab56`.
- Static Ghidra references: 2 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027FC2D`, 52 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (52/52 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 52 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `62e851def11c28bfe3f2f9539fe0447173a9a9105f9c690a10cba8d20598e4ed`; candidate object SHA-256: `d4d9c3c9dd58a61291e4e827d70a1976b5482c27a63e9376373691f8a4d3f073`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
