# sub_001DAAC0

- Function task: [#5245](https://github.com/soldieg/ReBLACK-XBOX/issues/5245).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DAAC0-0x001DAF05 inclusive, contiguous, 1094 bytes; evidence `ev_33f61cdb26b7b402ff7a93cdb9f6e51ace0af69d57dfa988246f03a2a7187971`.
- Static Ghidra references: 0 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DAAC0`, 1094 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1094/1094 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1094 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `90d94cd4d19b2dec5dee348715f79e42b52fdbb9b2022a5cbefc36708b8133de`; candidate object SHA-256: `eb51ca38ea7f142627062a0cb6b64375d1f44f80cae3b70e6fcfde3a135ea629`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
