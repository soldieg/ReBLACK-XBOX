# sub_001F9FF0

- Function task: [#5346](https://github.com/soldieg/ReBLACK-XBOX/issues/5346).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001F9FF0-0x001FA0B2 inclusive, contiguous, 195 bytes; evidence `ev_356af60b047ad1efb06e27d0578435ac875c47654f854dacf3072ea79eaef6f0`.
- Static Ghidra references: 2 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001F9FF0`, 195 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (195/195 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 195 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `bca2c4bdccd070ff6232bce55aef95805997b42b45f907b0a1c6d7f16fdbd8fc`; candidate object SHA-256: `14a2906d2ac32b42bff4a49fa1ab18e0c26559481da1072d663c5964f3b3789c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
