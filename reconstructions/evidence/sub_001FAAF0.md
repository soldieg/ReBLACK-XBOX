# sub_001FAAF0

- Function task: [#5352](https://github.com/soldieg/ReBLACK-XBOX/issues/5352).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001FAAF0-0x001FAC9E inclusive, contiguous, 431 bytes; evidence `ev_51260a3ab154e2e7e1c0646b43a9a5cd11aaa09dd17738f2b5d764cdfe7030be`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001FAAF0`, 431 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (431/431 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 431 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9d738f945936220f1fcf23fbe8372d9aa63055f68cc174a50616fba766f0f0c6`; candidate object SHA-256: `419bd28364d503addc570c1b016de4785f48fb05edd5115cb782531aa8627b26`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
