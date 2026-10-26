# sub_001D6DD0

- Function task: [#5230](https://github.com/soldieg/ReBLACK-XBOX/issues/5230).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001D6DD0-0x001D6EEF inclusive, contiguous, 288 bytes; evidence `ev_32c00fe8d005df7bb380415e38ae9a76b68c4d9a3b6c67ed16c13a460c0ed3a2`.
- Static Ghidra references: 13 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001D6DD0`, 288 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (288/288 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 288 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8f75372e78c0319412eca17ff55fe8fbcbf232473d6acd83612b750da64a6d84`; candidate object SHA-256: `c8c230a3906be0434ff1fc569ffe4cdc4663882ac2b37aaaed8833b03333b4a7`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
