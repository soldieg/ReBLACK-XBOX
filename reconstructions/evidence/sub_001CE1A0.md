# sub_001CE1A0

- Function task: [#2909](https://github.com/soldieg/ReBLACK-XBOX/issues/2909).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CE1A0â€“0x001CE1E7 inclusive, contiguous, 72 bytes; evidence `ev_9cb54670e6c3062f0c191ac87d6399860e19aaa9c7f3937639964bc32a083143`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CE1A0`, 72 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (72/72 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 72 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d91ec781dd8c851c7ad2642766ac2e1dc4c14ac881aa019e1ce59098f3729e86`; candidate object SHA-256: `e8ed243b36895ed72a9e056c79f7e2931c46948dfafddd653846cc50dceb9fee`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
