# sub_001CEE10

- Function task: [#2918](https://github.com/soldieg/ReBLACK-XBOX/issues/2918).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CEE10â€“0x001CEEAB inclusive, contiguous, 156 bytes; evidence `ev_b4b1187a5475f5acab66b859130e87264fe3fc68fdd35efc4eb57eb5ca8c774c`.
- Static Ghidra references: 4 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CEE10`, 156 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (156/156 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 156 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6db361b465d46e222120144f7576ccdb6633637944ce17aa7247054553fe333a`; candidate object SHA-256: `00a54bb630d22be8f023ce319a638d2ebb0cd8450ae23fa532ea9066957a90c9`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
