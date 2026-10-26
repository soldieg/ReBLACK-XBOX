# sub_00221FCE

- Function task: [#5485](https://github.com/soldieg/ReBLACK-XBOX/issues/5485).
- Batch: 52 (current 100-lot run: 52/100; 100 functions).
- Ghidra 12.1.3 body: 0x00221FCE-0x0022200A inclusive, contiguous, 61 bytes; evidence `ev_3698ae993882608b78ddf283f91811fc1164a36201ba3df12f2023a92415beaf`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_00221FCE`, 61 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (61/61 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 61 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `fd03bae43ea20adc633ed69cd4003f0eccc385f12bccf6c2ecef930c1b207bda`; candidate object SHA-256: `4185b1d9e7d3031918e27c5e0e625908ff8f9edfba4de4c1544a06c58d6a1662`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
