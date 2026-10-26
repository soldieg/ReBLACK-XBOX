# sub_0021EFB0

- Function task: [#5417](https://github.com/soldieg/ReBLACK-XBOX/issues/5417).
- Batch: 52 (current 100-lot run: 52/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021EFB0-0x0021F095 inclusive, contiguous, 230 bytes; evidence `ev_cdd1b3642c35a1fbe44e9b91ade808dc8296a23b9c4f962ef481e2b075a6d655`.
- Static Ghidra references: 6 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021EFB0`, 230 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (230/230 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 230 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4305aed066ff93a4fe0652e02edc86fafae72534fb1877554a4be709489735de`; candidate object SHA-256: `80422faf5fd394f9b54911dfac0782c15ee62fc78c39ea35726623cd14e3fb2b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
