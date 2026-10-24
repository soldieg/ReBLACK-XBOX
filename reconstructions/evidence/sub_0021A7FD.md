# sub_0021A7FD

- Function task: [#3254](https://github.com/soldieg/ReBLACK-XBOX/issues/3254).
- Batch: 31 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x0021A7FDâ€“0x0021A81C inclusive, contiguous, 32 bytes; evidence `ev_3a66edb33d985d650463dfd43b9e5cf2bc0c8356d0e676c8e5ca5a245f4d6916`.
- Static Ghidra references: 2 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021A7FD`, 32 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (32/32 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 32 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `072bce659284e03e0b86171083f145ded1935cb8159ea60d1f466941c72d752f`; candidate object SHA-256: `3051f0054efe895ce9d7b9221e0e1cfbb295f2c2f65313cdccc0d42639e2fc6b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
