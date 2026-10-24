# sub_001ACEC0

- Function task: [#2743](https://github.com/soldieg/ReBLACK-XBOX/issues/2743).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001ACEC0–0x001AD03E inclusive, contiguous, 383 bytes; evidence `ev_6ded30e764a1e963f5556a71a448655396734e4f7ad34c3f59319e95b73c7b06`.
- Static Ghidra references: 0 caller sites, 8 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001ACEC0`, 383 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (383/383 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 383 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d251f4f124fac852b22349bb86298c2bbd6751b4d216bbc3d392fd5525e63d01`; candidate object SHA-256: `77a3a820d9a72d63806738c07209af7eb2601938376020adfc0dbfdc7f1fd82c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
