# sub_001ABCC0

- Function task: [#2736](https://github.com/soldieg/ReBLACK-XBOX/issues/2736).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001ABCC0–0x001ABD23 inclusive, contiguous, 100 bytes; evidence `ev_1847b67cf53b2e7f3dd85091fa0d6eca7e30ae3b6e915bf5ea16ba88cb3aa0cb`.
- Static Ghidra references: 3 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001ABCC0`, 100 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (100/100 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 100 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `480ccab0f78da358a8a15bbdf34119fde24cc075735e92389f3efb7f116cbe96`; candidate object SHA-256: `99f57cef70a556bef22e817043a06869224626d99898728fec5d5d7bab41f226`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
