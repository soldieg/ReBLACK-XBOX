# sub_001F1FD0

- Function task: [#5343](https://github.com/soldieg/ReBLACK-XBOX/issues/5343).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001F1FD0-0x001F2012 inclusive, contiguous, 67 bytes; evidence `ev_837c78fbbc53dd9be49c35d1b4106c5250da506cfa801014aa8581df416acad6`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001F1FD0`, 67 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (67/67 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 67 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3936e554452f31037cff12f8b6ec9bd3d218d2f774fc2078ed711fd730e79653`; candidate object SHA-256: `3ea34f265a3dc5e80216c2852b6626e966d7100cb74e06e1d7a89e2c1d9dbcae`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
