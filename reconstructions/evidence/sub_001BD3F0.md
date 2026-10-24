# sub_001BD3F0

- Function task: [#2795](https://github.com/soldieg/ReBLACK-XBOX/issues/2795).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001BD3F0–0x001BD74D inclusive, contiguous, 862 bytes; evidence `ev_75c5405e4c88b611cea14120f6db1686711d9037101f842a643e774ff007a94e`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001BD3F0`, 862 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (862/862 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 862 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `89379b29d06b68100720cb04c82934907a20cce66f9f835756688300d4eb6203`; candidate object SHA-256: `6f60b379b560128e822767358b516e6854c87777fc50adf7107d16cc71686744`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
