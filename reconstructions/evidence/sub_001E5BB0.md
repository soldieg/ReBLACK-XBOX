# sub_001E5BB0

- Function task: [#5303](https://github.com/soldieg/ReBLACK-XBOX/issues/5303).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001E5BB0-0x001E5DD5 inclusive, contiguous, 550 bytes; evidence `ev_03e877a0698ff83c3362a4df20fe5265e463b4e42d36f1c6113f7fc6eafe5de1`.
- Static Ghidra references: 2 caller sites, 12 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001E5BB0`, 550 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (550/550 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 550 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9383cfda846b0de71bab6537043569cd40e6962549c61b5571e4ba01370c691c`; candidate object SHA-256: `c4ecae3c16fdf69c1507079944a5b4c75add92f00a42360a6bfda23eaf953e5f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
