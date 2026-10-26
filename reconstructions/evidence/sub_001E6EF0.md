# sub_001E6EF0

- Function task: [#5309](https://github.com/soldieg/ReBLACK-XBOX/issues/5309).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001E6EF0-0x001E7015 inclusive, contiguous, 294 bytes; evidence `ev_637b70702a29e3aea269d221b64f8a247dd6e86b6103290d5f3c5f0f4eb26b93`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001E6EF0`, 294 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (294/294 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 294 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4a46761026a0bde754934a76bf96f0bb7f3bcbd8509776cd8c5810f8c4973cc2`; candidate object SHA-256: `73137bcc9bb530a3d5395e6ec5726369dca60b5302e458f37cf77a76d78ec58f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
