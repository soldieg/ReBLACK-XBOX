# sub_001B1BA0

- Function task: [#5196](https://github.com/soldieg/ReBLACK-XBOX/issues/5196).
- Batch: 49 (current 100-lot run: 49/100; 100 functions).
- Ghidra 12.1.3 body: 0x001B1BA0-0x001B1D68 inclusive, contiguous, 457 bytes; evidence `ev_e716e6347cda46986afa8d0af42d6818f2483e0c899c873f89e3802644bfb1cb`.
- Static Ghidra references: 1 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001B1BA0`, 457 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (457/457 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 457 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c503a74dab3ca4c5f99f28a624d9b59d3c34306ce3e27a2bb146f0385d0067d6`; candidate object SHA-256: `f635d126aeeb098e8235674a4b0836c21406b7e0258b6b59c70d076be8832ba3`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
