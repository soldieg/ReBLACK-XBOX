# sub_001B2BC0

- Function task: [#5212](https://github.com/soldieg/ReBLACK-XBOX/issues/5212).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001B2BC0-0x001B2CFE inclusive, contiguous, 319 bytes; evidence `ev_5e46225c090468bdab2ee54c8188c0375031b478743c6649d20c17f5262e55f8`.
- Static Ghidra references: 2 caller sites, 10 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001B2BC0`, 319 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (319/319 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 319 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `00e3c73215d69928b7e6dc8c484e767f147f5c28c93c28d33445717434b31821`; candidate object SHA-256: `da97df553caceaa9b8a37c8e81d8deb53cf2991ba0b3d5f3da64dc6c4d8ba173`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
