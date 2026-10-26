# sub_0019DAD0

- Function task: [#5089](https://github.com/soldieg/ReBLACK-XBOX/issues/5089).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x0019DAD0-0x0019DAF4 inclusive, contiguous, 37 bytes; evidence `ev_344abf23113001b9bde977582ba19ce39a0df8d8d1f11432ea932f6c37717064`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0019DAD0`, 37 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (37/37 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 37 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `70a351711fd6346c3bb15d89e2c105ff37501fa0dde824ae6803e95f3e224d83`; candidate object SHA-256: `592efc22260a8b0c6e8aabf279282aa2bd4a76a22ba1308fdd5399591732a883`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
