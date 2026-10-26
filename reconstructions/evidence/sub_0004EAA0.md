# sub_0004EAA0

- Function task: [#4847](https://github.com/soldieg/ReBLACK-XBOX/issues/4847).
- Batch: 46 (current 100-lot run: 46/100; 100 functions).
- Ghidra 12.1.3 body: 0x0004EAA0-0x0004EC05 inclusive, contiguous, 358 bytes; evidence `ev_ec655961dfb824725b748f2fc392b4e45301b8e657b070b1cfcb0596d61b2d3e`.
- Static Ghidra references: 1 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; 2 indirect call instructions and 0 incoming sites without a caller owner remain unresolved. Direct call edges were checked against disassembly; complete caller/callee coverage is not claimed.
- Target candidate: `sub_0004EAA0`, 358 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (358/358 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 358 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8075ffc785f32e73de1794b4801696dfe9b4cf7403169e2c8e4963ecf60af874`; candidate object SHA-256: `a27b6d4dfd27903b8fb53ad465f1751759eb26e0436af01350c95220b4d0da1e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
