# sub_000AB0FF

- Function task: [#4158](https://github.com/soldieg/ReBLACK-XBOX/issues/4158).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000AB0FF-0x000AB106 inclusive, contiguous, 8 bytes; evidence `ev_953fd5ecc22e7ffeab4d1036dd03375a7492d1cb7ad95d48b1c9d417ac247312`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000AB0FF`, 8 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (8/8 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 8 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `41cc64eb6eb23459cd16675ed45d2058f5143ed3501dfbdb635d7bd1f1038b6e`; candidate object SHA-256: `79ab2c89286ef197bc294355d63479cdb92300a8c6cf655fd429fa7defbdc549`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
