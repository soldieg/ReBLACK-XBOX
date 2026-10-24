# sub_0027F6DF

- Function task: [#3539](https://github.com/soldieg/ReBLACK-XBOX/issues/3539).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027F6DFâ€“0x0027F754 inclusive, contiguous, 118 bytes; evidence `ev_77dc705e04bc245ee17834a8cec8f364eea41b01297855a199451dce95f5771f`.
- Static Ghidra references: 2 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027F6DF`, 118 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (118/118 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 118 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c9f38ff294f7882aca3af9e6c116099f7d8747cd9fae58895f367bc9cdb5c77a`; candidate object SHA-256: `faa2dcb71ee2e34a72dd875ba3ec264f0f2a46cf5ec41fadd4edf0d534cb84df`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
