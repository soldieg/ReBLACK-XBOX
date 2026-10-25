# sub_000DBF50

- Function task: [#4350](https://github.com/soldieg/ReBLACK-XBOX/issues/4350).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DBF50-0x000DBFF7 inclusive, contiguous, 168 bytes; evidence `ev_58250c9abcfa04624d6480d2674b97ed58c46ae7a1b3582aa8fb8121f5a1aebc`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DBF50`, 168 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (168/168 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 168 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7afd37c1cb07868e49383a1bb2ac616b5ef68250187ebb38f2541d41a8f459ce`; candidate object SHA-256: `4f8189432a619e218d2cbc97942ac8d40456f6790431296e1cd5748962e61ba0`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
