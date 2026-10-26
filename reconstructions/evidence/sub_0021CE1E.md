# sub_0021CE1E

- Function task: [#5369](https://github.com/soldieg/ReBLACK-XBOX/issues/5369).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021CE1E-0x0021CE61 inclusive, contiguous, 68 bytes; evidence `ev_9daa71575c3ebb20b314d78db81dbd520f5a7bb502be4950587249f66d2bf72f`.
- Static Ghidra references: 3 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021CE1E`, 68 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (68/68 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 68 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `188917cb85e24563e1104f650538d848df2d3e3e18bd39ec8bede6af58ed60ea`; candidate object SHA-256: `2bf8b3437e03545987370d45b1b21c13d833581e4f1f7708732be2849bf362f5`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
