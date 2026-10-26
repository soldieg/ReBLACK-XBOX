# sub_000AC0D0

- Function task: [#4161](https://github.com/soldieg/ReBLACK-XBOX/issues/4161).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000AC0D0-0x000AC0E7 inclusive, contiguous, 24 bytes; evidence `ev_c61f21caef22652afc1e7df8a7f72adb1040ff46f5e12d9429050bcba1f90b62`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000AC0D0`, 24 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (24/24 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 24 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `662a30566055db46a6f205165e57c5540738b21de646e4122e3bdc257cefa10a`; candidate object SHA-256: `09b00b712056184738a751a0387e8efd4ce21c97350da8039f4ee50ce6b9df86`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
