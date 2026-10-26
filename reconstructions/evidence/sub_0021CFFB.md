# sub_0021CFFB

- Function task: [#5372](https://github.com/soldieg/ReBLACK-XBOX/issues/5372).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021CFFB-0x0021D041 inclusive, contiguous, 71 bytes; evidence `ev_417c078b383027cb6ad1d1642c0ed4055f0b2a9b88a4f0f28dbdf682d6bf8bfc`.
- Static Ghidra references: 0 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; limitations: none recorded.
- Target candidate: `sub_0021CFFB`, 71 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (71/71 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 71 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0230ebb749e6ff050c03bd955e276b1d10ae536faa1df0e5a8d35d2336d63947`; candidate object SHA-256: `3ab091854fd36a99ed8ce78ad3b74e1162f23d08cd4c3272226dea0e753ba443`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
