# sub_0002ABC0

- Function task: [#3692](https://github.com/soldieg/ReBLACK-XBOX/issues/3692).
- Batch: 36 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x0002ABC0-0x0002ABD9 inclusive, contiguous, 26 bytes; evidence `ev_9fa39757e97eec5543e1f9ca307e1c59ac6aebf52e38bb2ba72db6f1f3993a09`.
- Static Ghidra references: 5 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0002ABC0`, 26 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (26/26 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 26 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `1c8389444ccb6131b5021b3fcbf2c6cedf586a4f1817e5849fcdca5fbfcc27d3`; candidate object SHA-256: `28eec605a668a0ef5b0cbfde686984f33f2e72fde09b265ce3d2a2c8d08cbe04`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
