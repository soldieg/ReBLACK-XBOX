# sub_001B3AD0

- Function task: [#5222](https://github.com/soldieg/ReBLACK-XBOX/issues/5222).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001B3AD0-0x001B3C3C inclusive, contiguous, 365 bytes; evidence `ev_4c45a324778e3af5a6d365ca0c7bc51979a5962ec855b66ff2fe4e347e803547`.
- Static Ghidra references: 0 caller sites, 11 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001B3AD0`, 365 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (365/365 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 365 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `efe5b11204b8c5dce2b33f82f9df5e018ca694da95da7642fa61fe0c41dbdf14`; candidate object SHA-256: `5556ca89296ab9fad920671b9fe71adf28e90b55a5e397313d1a0af4bb586d85`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
