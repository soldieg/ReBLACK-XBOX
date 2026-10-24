# sub_001C1FB0

- Function task: [#2818](https://github.com/soldieg/ReBLACK-XBOX/issues/2818).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001C1FB0–0x001C1FE3 inclusive, contiguous, 52 bytes; evidence `ev_795d8033de80f60839e14be4a35f0c027160ae78bf063c1305f6a5a6707a94b8`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001C1FB0`, 52 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (52/52 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 52 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8265512d31a7a21a072512ed7d97f9a5352cd85f13c3122d07596e7497041ff5`; candidate object SHA-256: `9746a2b05fd13bc4254a23d70b5995353caf7a4d4cfd5f937a3adee6e5a213cd`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
