# sub_001DB7B0

- Function task: [#5251](https://github.com/soldieg/ReBLACK-XBOX/issues/5251).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DB7B0-0x001DB85C inclusive, contiguous, 173 bytes; evidence `ev_7ae02babc3f4b4ea013982bbb25187e8d0d5b5194e26a7cc0ce66ef8110addf7`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DB7B0`, 173 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (173/173 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 173 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `75ff693668c8ab0e3224efa98fa4df52fcf144e285b9862a8e65ca49869d1f1c`; candidate object SHA-256: `8786659b7da739c85c546976b2b397bb6209c6f5985e399e38665b2e3be1c1ed`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
