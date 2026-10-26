# sub_001B8EF0

- Function task: [#2778](https://github.com/soldieg/ReBLACK-XBOX/issues/2778).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001B8EF0–0x001B8F2A inclusive, contiguous, 59 bytes; evidence `ev_18ed0408fc2565b9fa7aa8743d0d28272f33b75b7cfa8b4d5fccd2a3bbe529db`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001B8EF0`, 59 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (59/59 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 59 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `222073803fa6bdca199c80aa0ba4c61d0991b42bd70641b413899721b4786320`; candidate object SHA-256: `c1d4d6161f9c57fd543c6bd12b6800d9aba1caf449a9d0c182f3e5ea90544e87`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
