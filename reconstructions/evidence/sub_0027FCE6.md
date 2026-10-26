# sub_0027FCE6

- Function task: [#3547](https://github.com/soldieg/ReBLACK-XBOX/issues/3547).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027FCE6â€“0x0027FCEA inclusive, contiguous, 5 bytes; evidence `ev_a85940296449f26178c642e86058bba2a32b618afe7ad8d88c403b59d27b1e57`.
- Static Ghidra references: 4 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027FCE6`, 5 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (5/5 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 5 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e1d90f0bb15f157e3086d577508123ae7f181a9fb70dd4558c61118d163b7dc0`; candidate object SHA-256: `912d8593223aa501b8d5765c7b5150356f399b28272d43e8787e9902fa38cbbf`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
