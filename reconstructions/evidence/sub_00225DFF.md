# sub_00225DFF

- Function task: [#5526](https://github.com/soldieg/ReBLACK-XBOX/issues/5526).
- Batch: 53 (current 100-lot run: 53/100; 100 functions).
- Ghidra 12.1.3 body: 0x00225DFF-0x00225E1C inclusive, contiguous, 30 bytes; evidence `ev_4a65783c120b93c01a4e414066588816b30ce183b8579d71d46dd2790451379f`.
- Static Ghidra references: 0 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_00225DFF`, 30 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (30/30 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 30 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6636c21fcc4f539d18520c841a1f452e7517195d5d844381268d9b77de4b4d37`; candidate object SHA-256: `0a776eed2af01de7301b95a0dbbe8bb6d6f32ca3b94bd672b2e91e1c3eca433b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
