# sub_00226FBB

- Function task: [#5540](https://github.com/soldieg/ReBLACK-XBOX/issues/5540).
- Batch: 53 (current 100-lot run: 53/100; 100 functions).
- Ghidra 12.1.3 body: 0x00226FBB-0x0022708E inclusive, contiguous, 212 bytes; evidence `ev_b839700f92c3db31e0f58cd8f5dfe3114489ecde0a2d37b91a43d64075f93b2c`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_00226FBB`, 212 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (212/212 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 212 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9907ff512c447f4abeda72de59d9d0d8c4f0bc645d8911e1cde89b0717fdacc0`; candidate object SHA-256: `9acdcf99f9ce126b17aa2c0ea1e3d5c3fbf9c22206fc004d1812cfffd8879c25`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
