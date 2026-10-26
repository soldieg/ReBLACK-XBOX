# sub_000BDD60

- Function task: [#4202](https://github.com/soldieg/ReBLACK-XBOX/issues/4202).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BDD60-0x000BE0AD inclusive, contiguous, 846 bytes; evidence `ev_91053f8202e7d6b9e626e5b7bd204696d20088beb9b76a3476d39e566ea7c576`.
- Static Ghidra references: 1 caller sites, 8 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BDD60`, 846 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (846/846 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 846 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7e4ba1aa9eb2a008144fa78a1a89f6c4dcb0f9bd84435d858384f0c9ecdd0ae1`; candidate object SHA-256: `dac94bf8adb6d7141eecb79cc592ce7d0f5d43d620d2f0d893baca2a008c5b22`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
