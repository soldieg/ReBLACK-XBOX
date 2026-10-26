# sub_000BE3F0

- Function task: [#4205](https://github.com/soldieg/ReBLACK-XBOX/issues/4205).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BE3F0-0x000BE48B inclusive, contiguous, 156 bytes; evidence `ev_87204e39bc55f1117ae3ca1ef9bfe9c431906fb835099211615c1bac5ee5b7f4`.
- Static Ghidra references: 8 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BE3F0`, 156 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (156/156 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 156 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `67c55006b547ead7ba66a509b9ce8aa208a7e5aa9a643f81f2444df22f5fc794`; candidate object SHA-256: `b14f5e9440ad4417dd30011e6e08e74857de0b95970c32ec81bdc49bf1a9ea50`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
