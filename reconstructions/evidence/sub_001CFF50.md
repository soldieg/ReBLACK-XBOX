# sub_001CFF50

- Function task: [#2930](https://github.com/soldieg/ReBLACK-XBOX/issues/2930).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CFF50â€“0x001D0111 inclusive, contiguous, 450 bytes; evidence `ev_d853da4e6d685b100a496dcbe557b2ddc8811ac02a91436037b2852ce5b92474`.
- Static Ghidra references: 2 caller sites, 8 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CFF50`, 450 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (450/450 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 450 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `53656eb92d88190afbc15416a7d077df42e657d68fe442df2eb76cb7a5be5841`; candidate object SHA-256: `7f9c7b6d016d13b648b7e422da89db39f3fcb3c4f07d30589a5fbc9079cc5747`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
