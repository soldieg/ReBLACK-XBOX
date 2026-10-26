# sub_0021ABF0

- Function task: [#3260](https://github.com/soldieg/ReBLACK-XBOX/issues/3260).
- Batch: 31 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x0021ABF0â€“0x0021AC10 inclusive, contiguous, 33 bytes; evidence `ev_018b7357a6121bfea86aa5b522e91ad9be7b3bc2e1592f2edc677c8811dbc679`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021ABF0`, 33 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (33/33 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 33 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0e9f09126aa8dbe5d916b6d620e3e499def12a40003da85c860ce974c8a4a9f4`; candidate object SHA-256: `263b5646e33dc76e48b04af0b1534a7eb383e65618ade1d830ca51e12fb3b419`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
