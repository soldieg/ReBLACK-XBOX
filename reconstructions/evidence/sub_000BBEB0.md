# sub_000BBEB0

- Function task: [#4188](https://github.com/soldieg/ReBLACK-XBOX/issues/4188).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BBEB0-0x000BBEF3 inclusive, contiguous, 68 bytes; evidence `ev_f61fb84b813a6cdc04f51e27abd983e3fe0c7e11969d13d407ce5f50425c3f01`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BBEB0`, 68 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (68/68 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 68 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `853aadaa70fa1d81524608614df9410e979b5694020fd3298421b012eddc2040`; candidate object SHA-256: `98644e19802936954eed0cf601eafaf1d78727bbb04b09b71c8fe02e0931d2ef`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
