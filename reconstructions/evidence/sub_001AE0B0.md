# sub_001AE0B0

- Function task: [#2752](https://github.com/soldieg/ReBLACK-XBOX/issues/2752).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AE0B0–0x001AE2F2 inclusive, contiguous, 579 bytes; evidence `ev_e021bf80b90bfe7a24c0148ca7f7a5f5444437214ffbaab744bcc961dd76a607`.
- Static Ghidra references: 1 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AE0B0`, 579 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (579/579 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 579 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0d2828ca2419827598db30c80848e87cc26f0528694a26e9cbc396bd67560017`; candidate object SHA-256: `82fa9620818d8ed0c05f4c9c5b1aac9e1070ce460c446745dd8feb040660b069`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
