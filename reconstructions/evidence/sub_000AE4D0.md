# sub_000AE4D0

- Function task: [#4962](https://github.com/soldieg/ReBLACK-XBOX/issues/4962).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x000AE4D0-0x000AE501 inclusive, contiguous, 50 bytes; evidence `ev_bd5dc35e9d2354a718ed195df6fac21bbc62a9fa1677f6e94483534cf3b057e2`.
- Static Ghidra references: 3 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_000AE4D0`, 50 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (50/50 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 50 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `599793130a2a8b82639f8ea5c9ee52bed98b2c04db8d92a7051e9c92ecb5769e`; candidate object SHA-256: `85de507b13437fb386f2adb7a6ab45989396891705e60b0222edc2b156228107`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
