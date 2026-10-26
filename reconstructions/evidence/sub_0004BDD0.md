# sub_0004BDD0

- Function task: [#4835](https://github.com/soldieg/ReBLACK-XBOX/issues/4835).
- Batch validation origin: lot 46. Included in the repaired PR #1045 as one of 50 replacement functions for candidates already present on main.
- Ghidra 12.1.3 body: 0x0004BDD0-0x0004BFD3 inclusive, contiguous, 516 bytes; evidence `ev_c1637b0e90df10574d8c6cdb5aa525839e0efd0400c5e5a65ad06e9e8346497b`.
- Static Ghidra references: 0 caller sites, 8 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; 4 indirect call instructions and 0 incoming sites without a caller owner remain unresolved. Direct call edges were checked against disassembly; complete caller/callee coverage is not claimed.
- Target candidate: `sub_0004BDD0`, 516 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (516/516 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 516 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9c5b9ac713b750dd6a6522c84d073abe09e0f67097d9fc4ac18a3804df984cd9`; candidate object SHA-256: `9589dca7dbc227e72da9635481fbfaf695b493a62ecb27b26249f69e09ee8e0b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
