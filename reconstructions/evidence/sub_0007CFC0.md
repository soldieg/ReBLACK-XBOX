# sub_0007CFC0

- Function task: [#3876](https://github.com/soldieg/ReBLACK-XBOX/issues/3876).
- Batch: 37 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x0007CFC0-0x0007D00E inclusive, contiguous, 79 bytes; evidence `ev_9ed2c6e32e6297d58aec41f0531a72a0e8f363c8fa92477f1dd4c95fe0a39906`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0007CFC0`, 79 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (79/79 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 79 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ebb862b3d64ab100280a8dbf836014f4741cd1c3a510019833039ae65e30f410`; candidate object SHA-256: `a79b1c581dac51e903bf9d451f25eb971f6042f4ba86c24e1b41300887a5bbec`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
