# sub_000ACDE0

- Function task: [#4163](https://github.com/soldieg/ReBLACK-XBOX/issues/4163).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000ACDE0-0x000ACE2C inclusive, contiguous, 77 bytes; evidence `ev_acbfb249b0d5c32c573b88cbdd11cffe91e6e9f2e1ecece31b849f9078231112`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000ACDE0`, 77 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (77/77 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 77 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `95184601ae0ee4b4dd1d3a3803fa2f26e28250037202b51ba594ff806c7de9ad`; candidate object SHA-256: `a24ba3f2c3f0c7e7bf35b3224e613a181970c4776e35f1246f68985eaaf75302`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
