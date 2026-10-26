# sub_0009EBFD

- Function task: [#4035](https://github.com/soldieg/ReBLACK-XBOX/issues/4035).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009EBFD-0x0009ED6B inclusive, contiguous, 367 bytes; evidence `ev_b69fb92441e8cb8dee9be3b0da976d96880002a46ccc79e6d72fcd585a0f9b13`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009EBFD`, 367 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (367/367 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 367 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4f3ce17a4927027e2115c152231064d9940de24ca3ca6818981367045c863a19`; candidate object SHA-256: `8b2106470cccfd174f768a36866d14d6ce438a113bc87a4f43da9f29a9387f56`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
