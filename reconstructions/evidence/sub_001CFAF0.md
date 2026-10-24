# sub_001CFAF0

- Function task: [#2928](https://github.com/soldieg/ReBLACK-XBOX/issues/2928).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CFAF0â€“0x001CFBDD inclusive, contiguous, 238 bytes; evidence `ev_6c7476224b1de3946b4ddb2588d924d5fe4d6e09997766f0e843c5dc03ebf4fc`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CFAF0`, 238 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (238/238 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 238 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `23119f1e1b210de31b10a5a6062adaa6f76ceb4c9e718c59b3335e17bc056328`; candidate object SHA-256: `a3419b0e84dca4e29b19ecac396e173ad53bbf721e83d997afd339bfb2e31b28`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
