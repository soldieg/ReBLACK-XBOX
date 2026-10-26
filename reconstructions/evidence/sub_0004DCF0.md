# sub_0004DCF0

- Function task: [#3777](https://github.com/soldieg/ReBLACK-XBOX/issues/3777).
- Batch: 36 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x0004DCF0-0x0004DD67 inclusive, contiguous, 120 bytes; evidence `ev_aa08964848d4a78a6642eb9d601032b296b77d6638bfcea882124ea531cc9f3b`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0004DCF0`, 120 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (120/120 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 120 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ce642984231efe2fcc3a560184230382003d51019fa50c977e78c250c00f9c89`; candidate object SHA-256: `7a17cfd2cb8dbc5a7bdbca5660c65923b391606b2af58ca1d035f93b9e8fc2d0`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
