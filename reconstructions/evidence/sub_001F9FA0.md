# sub_001F9FA0

- Function task: [#5345](https://github.com/soldieg/ReBLACK-XBOX/issues/5345).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001F9FA0-0x001F9FE8 inclusive, contiguous, 73 bytes; evidence `ev_718627904493a4ce029261269fedbad7a891939083f467e2f763ea8cb5d59dac`.
- Static Ghidra references: 0 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001F9FA0`, 73 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (73/73 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 73 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ee62850d1025f94fabb7b2322fb851d65de061b02996ef8456ca4f887af1f296`; candidate object SHA-256: `6e58ee2fde87dada9dcc07723bc603dc7e08fbc5383cda8fa172ed0dc11d2b42`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
