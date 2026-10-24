# sub_001AEAC0

- Function task: [#2759](https://github.com/soldieg/ReBLACK-XBOX/issues/2759).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AEAC0–0x001AECB9 inclusive, contiguous, 506 bytes; evidence `ev_6881b351b172026593072709a179262b891244315ad1cc21f57b25b5a7c3214d`.
- Static Ghidra references: 1 caller sites, 9 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AEAC0`, 506 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (506/506 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 506 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `aff051f541aefda4ff1bccfac9669cecf1704b93c47158fe25544c1858f7dc61`; candidate object SHA-256: `c4c3882776fd31c4ae8b2eae88bb6e4419435afe16e5589a4dc075a273c19c46`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
