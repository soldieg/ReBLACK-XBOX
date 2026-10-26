# sub_001CD0E0

- Function task: [#2906](https://github.com/soldieg/ReBLACK-XBOX/issues/2906).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CD0E0â€“0x001CD27E inclusive, contiguous, 415 bytes; evidence `ev_535b885abf3eaf04cbc12aeb32544f5fec8fabdaeab96e55dee13c8c09ff8c12`.
- Static Ghidra references: 3 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CD0E0`, 415 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (415/415 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 415 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8e9d04fd3e517aeaca5514da2a19f3078565e189843f295549f2b31d74d7ae31`; candidate object SHA-256: `c39ba734ace218ddffe2337fb190b644f288d0dc8ede9f52a8d2c3ec28c7c636`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
