# sub_001B2AF0

- Function task: [#5211](https://github.com/soldieg/ReBLACK-XBOX/issues/5211).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001B2AF0-0x001B2BB6 inclusive, contiguous, 199 bytes; evidence `ev_34c4ecafd0acddfaa3eaf28fb9ecc75b581f68a27ff4010ea398e4b4338717ff`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001B2AF0`, 199 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (199/199 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 199 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `74b156455363a7296036b7603b5ed6e3949549d7431b805ebed1dbc38ba0d5fa`; candidate object SHA-256: `6d43123c668b6c6e3acf2046ab62e21fa2c936c80dcd982becb87854b2a808b7`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
