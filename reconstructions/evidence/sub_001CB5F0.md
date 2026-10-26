# sub_001CB5F0

- Function task: [#2889](https://github.com/soldieg/ReBLACK-XBOX/issues/2889).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CB5F0â€“0x001CB67C inclusive, contiguous, 141 bytes; evidence `ev_a26dc10a45e6341c244c65595f965b0f4333143c227e245d7fa12c059d208374`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CB5F0`, 141 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (141/141 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 141 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ac020290debc1058a4f7952777fcaf4a995f54f5b081f6c029b5224821faa3b8`; candidate object SHA-256: `f9f3a6697183f28107db7ce1e2edf4a280e65a9b810e9d9035cc1121f6a1e798`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
