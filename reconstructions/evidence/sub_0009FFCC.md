# sub_0009FFCC

- Function task: [#4049](https://github.com/soldieg/ReBLACK-XBOX/issues/4049).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009FFCC-0x0009FFE5 inclusive, contiguous, 26 bytes; evidence `ev_c86121aa1c41b337a55b2bfde1f16bca0ee4cb0630296b2f18c05223ad625861`.
- Static Ghidra references: 23 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009FFCC`, 26 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (26/26 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 26 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `762f8092b71eeaadb808f0721bd3823d4382154bfe04868964dc44a025224349`; candidate object SHA-256: `f38892572688a5f04ab343aa7daddb184d2e80880a84acc45aa22ccfe816cf6c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
