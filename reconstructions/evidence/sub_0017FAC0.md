# sub_0017FAC0

- Function task: [#2528](https://github.com/soldieg/ReBLACK-XBOX/issues/2528).
- Batch: 24 (current ten-batch run: 2/10; 100 functions).
- Ghidra 12.1.3 body: 0x0017FAC0–0x0017FC46 inclusive, contiguous, 391 bytes; evidence `ev_b1734f0f79ee5104c67f20086e435c48ad3733f2c2e651b728eea519154e0ffd`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0017FAC0`, 391 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (391/391 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 391 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0e67d8f6df377df822bd4a7441d9f85eb575dbab89f2bd045d5fa096178e4cd6`; candidate object SHA-256: `388ad145f0f351c71c94c7dd1a11504f606a5dbe9bf0588f97e6713285a0e649`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
