# sub_001DDCA0

- Function task: [#5256](https://github.com/soldieg/ReBLACK-XBOX/issues/5256).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DDCA0-0x001DDD8D inclusive, contiguous, 238 bytes; evidence `ev_835aaaa66444dcd411c3d74f70d84973e36fdd913c5638a80de9962e9730f70f`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DDCA0`, 238 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (238/238 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 238 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7a1cb29f60568dc2236bfaff49c1f4836199d9c816516d986eff6bfb2e1e2399`; candidate object SHA-256: `3e733d7fc0f6bc6c1d0233249ae13a891382690abcf9791c4c4c45050a0bbc3f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
