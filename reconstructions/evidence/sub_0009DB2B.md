# sub_0009DB2B

- Function task: [#4018](https://github.com/soldieg/ReBLACK-XBOX/issues/4018).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009DB2B-0x0009DC3D inclusive, contiguous, 275 bytes; evidence `ev_05e27c8214c3571461aa3c3c93a504d6ee465649051efbf22453b6c9990ab7ba`.
- Static Ghidra references: 4 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009DB2B`, 275 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (275/275 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 275 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `1f5d8351d9ea440e775b5c8d6bed4ecc5c4542a093526ebd540dbf8f8b0be05f`; candidate object SHA-256: `c0c50e1fc0c1858c1a6d56e1c7b129129a21b7b08562c75fbab25d9e1c7f2b76`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
