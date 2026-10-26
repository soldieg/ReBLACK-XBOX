# sub_0007FAD0

- Function task: [#4924](https://github.com/soldieg/ReBLACK-XBOX/issues/4924).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x0007FAD0-0x0007FAFA inclusive, contiguous, 43 bytes; evidence `ev_9b460d11d31a071deda31201faed9f6f5a5ef068331a424acbaad211efd4ff30`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_0007FAD0`, 43 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (43/43 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 43 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7b90c71d8c2967ea30b339f752a198793bcaf35e2b23dfd0ebe04b044c592966`; candidate object SHA-256: `ee408e2dfc1b17afc56b0bcf2cdc1f259cd16687f4f1252766e8baf41eb244b1`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
