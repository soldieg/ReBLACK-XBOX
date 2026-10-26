# sub_001F0DE0

- Function task: [#5334](https://github.com/soldieg/ReBLACK-XBOX/issues/5334).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001F0DE0-0x001F1018 inclusive, contiguous, 569 bytes; evidence `ev_31eb38b581d9b46f769510201ec019c24b4e5b8c4c096957ee70b2c845dff1cd`.
- Static Ghidra references: 0 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001F0DE0`, 569 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (569/569 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 569 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9dc2468cc92f79236024608286872f93c74ebbce31e535c08317dc7c308233d0`; candidate object SHA-256: `1091973b97971fabe1d0bef9e560c30add0ba3464a6059a47001c0bf27bcf249`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
