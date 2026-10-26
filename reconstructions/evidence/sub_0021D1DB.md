# sub_0021D1DB

- Function task: [#5376](https://github.com/soldieg/ReBLACK-XBOX/issues/5376).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021D1DB-0x0021D1F3 inclusive, contiguous, 25 bytes; evidence `ev_376fbcd0bfe1b5da9cada43d216f5b6dbcd431664195ba3393b1735be2049ffb`.
- Static Ghidra references: 4 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021D1DB`, 25 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (25/25 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 25 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `048eb220e05e8db983c1585306e3766a0255fefd45040857ceb6b329af8a0211`; candidate object SHA-256: `19524265c8ca4381d21e9b576759fdcf4c46ad9c7ea15ca49037c76c0c5cb9f1`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
