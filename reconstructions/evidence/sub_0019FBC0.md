# sub_0019FBC0

- Function task: [#5106](https://github.com/soldieg/ReBLACK-XBOX/issues/5106).
- Batch: 49 (current 100-lot run: 49/100; 100 functions).
- Ghidra 12.1.3 body: 0x0019FBC0-0x0019FC15 inclusive, contiguous, 86 bytes; evidence `ev_a5e0062d082ed8fa2465e2c9fafeb81bf07fc5fa63ca5e6d60e29da463035f6c`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0019FBC0`, 86 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (86/86 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 86 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4283a4f0b79a88f3ef0c78f94c2971615c76a13567fd3ce9d85b7d7799ca2e57`; candidate object SHA-256: `c83d818622206a8b4747f94e23a8c7e200c882e9a810428f76d55431d8b1059a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
