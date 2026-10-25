# sub_0009DD4D

- Function task: [#4020](https://github.com/soldieg/ReBLACK-XBOX/issues/4020).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009DD4D-0x0009DDF1 inclusive, contiguous, 165 bytes; evidence `ev_f649f7a7980083d3c049959a6668684bdd8b2a2060cfb41aaca03189672aaa08`.
- Static Ghidra references: 2 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009DD4D`, 165 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (165/165 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 165 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6b12bd78b476dfa3c408910e2ffbfec62ab70b2546fa281d688148e1d246d88c`; candidate object SHA-256: `e246f4a1799dae75fb293582b02a421a1acf472d5036618e84eddf4340dae584`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
