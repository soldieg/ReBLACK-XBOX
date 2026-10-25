# sub_000D4CB0

- Function task: [#4292](https://github.com/soldieg/ReBLACK-XBOX/issues/4292).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000D4CB0-0x000D4D44 inclusive, contiguous, 149 bytes; evidence `ev_764088c07f9130d9aeafe963a39414fd2ef16d5abb106103fb87a7c945bf3641`.
- Static Ghidra references: 3 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000D4CB0`, 149 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (149/149 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 149 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a1b7b88270ce6cd4de43089add79bb97e17b2d43fab2a2869f823522e614a1aa`; candidate object SHA-256: `4a22b3b231dfa0f59ad8885c59ad78e126d88305993bce0457681fc7e4cb9cfa`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
