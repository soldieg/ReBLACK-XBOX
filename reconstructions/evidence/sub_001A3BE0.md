# sub_001A3BE0

- Function task: [#5150](https://github.com/soldieg/ReBLACK-XBOX/issues/5150).
- Batch: 49 (current 100-lot run: 49/100; 100 functions).
- Ghidra 12.1.3 body: 0x001A3BE0-0x001A3C29 inclusive, contiguous, 74 bytes; evidence `ev_7e506eee2cd7dd2f0ba2bf2fc65cb61a263d2f14ce29d66d9e9a82d50738bffd`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001A3BE0`, 74 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (74/74 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 74 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `599ec93dc74afeb12a3f38062179d28265a193c26f8300cb0160c6ed9121450c`; candidate object SHA-256: `2d7ad7a7b5b1b166d17107b35486fdc75bd12d7671bd4941fbdd0d5a13482876`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
