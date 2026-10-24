# sub_0026FBB0

- Function task: [#3433](https://github.com/soldieg/ReBLACK-XBOX/issues/3433).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0026FBB0â€“0x0026FF39 inclusive, contiguous, 906 bytes; evidence `ev_3f20da61dbdb3093ac385f10b9508947d757cdfdb635b343f08c599ffeb1d1ba`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0026FBB0`, 906 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (906/906 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 906 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `eb99d7b8dc9303b027845b83bd31bcf6aa17cd04f18430795f1e1e7940fe4571`; candidate object SHA-256: `fa257f83c2fca1bb750eb7f72aaf54da9b8c81df0fe3c6097968bcda4e389a2a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
