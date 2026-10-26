# sub_0019ECC0

- Function task: [#5102](https://github.com/soldieg/ReBLACK-XBOX/issues/5102).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x0019ECC0-0x0019ED53 inclusive, contiguous, 148 bytes; evidence `ev_757dbace5f99bd97e1ce660789d097e66922d08e3b3c41bbc139bf2564df586f`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0019ECC0`, 148 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (148/148 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 148 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `bdd165dcaf96d7a1da06f72400124985f2edcc7e1154aa174da8d5109a3bb6fb`; candidate object SHA-256: `7d1d146bf037e39c7fddd72759df8c712ba9d197e1467d6afb4413a97e7fcd3e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
