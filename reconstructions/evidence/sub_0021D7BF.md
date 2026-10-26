# sub_0021D7BF

- Function task: [#5384](https://github.com/soldieg/ReBLACK-XBOX/issues/5384).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021D7BF-0x0021D825 inclusive, contiguous, 103 bytes; evidence `ev_f1b9b83fc9e763ec9d5b32c96d4ab1702d88ee46d79b646babdeffef4ff69c06`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021D7BF`, 103 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (103/103 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 103 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `93c9730ace2a7cf85ef1043e8bb0b79ca6263abac34f1836d076b0caf6643a2b`; candidate object SHA-256: `f7f4423297de2defcf4da00d58009ee50c2311c9379037b291292b73369a6821`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
