# sub_001EA0D0

- Function task: [#5317](https://github.com/soldieg/ReBLACK-XBOX/issues/5317).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001EA0D0-0x001EA3A7 inclusive, contiguous, 728 bytes; evidence `ev_013da0cb90378c70932ed92c6ffc55ecf406b8dc0e16acb7af8901f5467c135e`.
- Static Ghidra references: 1 caller sites, 15 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001EA0D0`, 728 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (728/728 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 728 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `cd87ff6e9d6b637a493a3e7a70ff0b9a8515d6b2e54e58d4184d1974e91d216d`; candidate object SHA-256: `057bd115552f6fe06893a4dee312679fe77eab65fc80a1a54e8ab32ff9170081`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
