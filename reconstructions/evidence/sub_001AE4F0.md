# sub_001AE4F0

- Function task: [#2756](https://github.com/soldieg/ReBLACK-XBOX/issues/2756).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AE4F0–0x001AE668 inclusive, contiguous, 377 bytes; evidence `ev_6d62a2e2bfc5473f171ce0780d10adeb0e76c298f1f7b4794a869aed1b212ebd`.
- Static Ghidra references: 0 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AE4F0`, 377 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (377/377 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 377 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `b3b1ec4136380716b149a1bddb071868d44f195a9bbf66992d738fdd4d2ccfc1`; candidate object SHA-256: `bf9371a0b04f4223f76ea49ea4e3f708ac9a5341cb4f5283082e7d2e66538e35`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
