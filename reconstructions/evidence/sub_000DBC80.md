# sub_000DBC80

- Function task: [#4347](https://github.com/soldieg/ReBLACK-XBOX/issues/4347).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DBC80-0x000DBCE1 inclusive, contiguous, 98 bytes; evidence `ev_70a98eeb21ce2b5667329d194592f0bdb8683086b81a16561120d2b4f4a76144`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DBC80`, 98 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (98/98 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 98 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a893477c4ec838ac9dd02fe1410d02d806915a65a7f7e421d53c1196a077d43c`; candidate object SHA-256: `7f1029a66b17192a3e4526ff2a0fea4b0dc1e97546e6af297ddd4e9ea8b9914d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
