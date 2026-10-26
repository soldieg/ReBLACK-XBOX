# sub_001DD6C0

- Function task: [#5253](https://github.com/soldieg/ReBLACK-XBOX/issues/5253).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DD6C0-0x001DD80E inclusive, contiguous, 335 bytes; evidence `ev_841454034ee7ffb4ba0b21311051096cb1dbad35585b12650225e8dee58603f2`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DD6C0`, 335 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (335/335 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 335 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d8bf111993ba55651c376d7a84a14c22e86e90531cfbb07d4f07cabb5886c832`; candidate object SHA-256: `e69d4424108352fbc45b519edd942d16510d8b600e036258ef74b6056dc7645b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
