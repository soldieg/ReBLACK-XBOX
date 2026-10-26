# sub_001F1DE0

- Function task: [#5342](https://github.com/soldieg/ReBLACK-XBOX/issues/5342).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001F1DE0-0x001F1E2B inclusive, contiguous, 76 bytes; evidence `ev_f271f4911af58b07415600da9034c2f30260167defe13265875214884dc14336`.
- Static Ghidra references: 4 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001F1DE0`, 76 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (76/76 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 76 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `63d9eff20b7420c557c7fbdea86ffdb2c2c637d68e140a0a8c2b680d463a6ab1`; candidate object SHA-256: `b2911d11a9d6b86c5ddf6add95b900a069944e621e5db66f6a88c00b7c0ae917`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
