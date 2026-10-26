# sub_001AFA80

- Function task: [#2772](https://github.com/soldieg/ReBLACK-XBOX/issues/2772).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AFA80–0x001AFCCE inclusive, contiguous, 591 bytes; evidence `ev_8d0087a9d5f7a38b64e36103e396a6f507545afa6d5d04cacd91d7fb6640ef86`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AFA80`, 591 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (591/591 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 591 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `163dd50872d573843b9bdd94d218f1f89ea115c09287d366aff876c0da686aee`; candidate object SHA-256: `5644dd22f41225907ff2fba5831f601b8eae1e985be9dccbadd92ddeb7647d4a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
