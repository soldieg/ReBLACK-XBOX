# sub_001C9DD0

- Function task: [#2876](https://github.com/soldieg/ReBLACK-XBOX/issues/2876).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001C9DD0–0x001C9EFB inclusive, contiguous, 300 bytes; evidence `ev_16e169dca9ee51162eb5cac0f73dc2097a37d4a06223d028793b658089408517`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001C9DD0`, 300 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (300/300 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 300 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ce173393a339bdb293830051d105a1580b31d54861a4cd2482219de83c2c5deb`; candidate object SHA-256: `4232aaa135280acbc7bf3132536b87b78f9bab9fc116e3a8a6fb926a7d8759ae`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
