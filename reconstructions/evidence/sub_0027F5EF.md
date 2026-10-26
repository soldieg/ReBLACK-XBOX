# sub_0027F5EF

- Function task: [#3534](https://github.com/soldieg/ReBLACK-XBOX/issues/3534).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027F5EFâ€“0x0027F60F inclusive, contiguous, 33 bytes; evidence `ev_831c778d6d3d80ba6c7ca91aa8d271a0bae332cecff2381f7eabba9d3758b7f2`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027F5EF`, 33 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (33/33 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 33 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `be105771520627ff864f9975e185614feadcd5062e46190a1f0428664554b62e`; candidate object SHA-256: `0d4e742a6ae7a76857736efedabfefde0765d8d9c8e1c0cec02b293dbc93885c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
