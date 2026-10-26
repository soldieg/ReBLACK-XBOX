# sub_000AFCE0

- Function task: [#4978](https://github.com/soldieg/ReBLACK-XBOX/issues/4978).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x000AFCE0-0x000AFD26 inclusive, contiguous, 71 bytes; evidence `ev_090b2a217ef702d59548c9b32f25b2470870c9821cae97b722edc325983c435d`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_000AFCE0`, 71 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (71/71 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 71 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2d3b6a3ce582825a1858ea74f83cb84544a82d9a91ba73859335ddc35993abda`; candidate object SHA-256: `4c124a4c538be4164e7a8d72cb0ff0481bfa18c0a29fd8a2984401bf7e8a462a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
