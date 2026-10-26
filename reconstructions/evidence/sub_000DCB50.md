# sub_000DCB50

- Function task: [#5023](https://github.com/soldieg/ReBLACK-XBOX/issues/5023).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x000DCB50-0x000DCC30 inclusive, contiguous, 225 bytes; evidence `ev_18f46da4fb2ab024f203b05699f83470f9bf90b5626df3f2e49f6a9b1bdc67f6`.
- Static Ghidra references: 3 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's caller inventory omits sources of 2 call reference(s) into this function's body..
- Target candidate: `sub_000DCB50`, 225 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (225/225 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 225 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `95372844cd4440ebd5e2f384c24d8dd8b4cc4137c4e821fec262dbb1b52046bb`; candidate object SHA-256: `fa3934a531b586487108ae68f43e0530bf8ca49ff14b5c85eaa819d2c27dfbb3`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
