# sub_001E7BF0

- Function task: [#5312](https://github.com/soldieg/ReBLACK-XBOX/issues/5312).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001E7BF0-0x001E7C8B inclusive, contiguous, 156 bytes; evidence `ev_2f1c702c5cc55862ad7de5865a49017d565ceee01e0e4062323811431396e3bf`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001E7BF0`, 156 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (156/156 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 156 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `02ea4e426133220d964a249bc85f5b9cb89783c699bef7f9fb59717f5093a174`; candidate object SHA-256: `4f389300778a53cd841621f6fddc4604ff34e62741d8dcfe54bf36fd450cd57c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
