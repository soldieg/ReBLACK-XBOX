# sub_001FDFC0

- Function task: [#3094](https://github.com/soldieg/ReBLACK-XBOX/issues/3094).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FDFC0â€“0x001FE01C inclusive, contiguous, 93 bytes; evidence `ev_c9f0f6a3c59edeb499f26679647f1493b230fe811ba69d2bae70cf29b0c061d0`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FDFC0`, 93 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (93/93 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 93 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `dfd063be0a3b6962430b07497464b5485dcfcfc57fa75e2d4df5e578e852c83c`; candidate object SHA-256: `4bfeb8be7f3867cc3aa1866d52a875e0a6ddc921cc9b1a03ac3f1e670831c2f5`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
