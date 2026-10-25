# sub_0003BDE0

- Function task: [#4454](https://github.com/soldieg/ReBLACK-XBOX/issues/4454).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0003BDE0-0x0003BFB1 inclusive, contiguous, 466 bytes; evidence `ev_62b1f7d7a6c246d33467096a231ba27b09e0134da13e8b285207255d8d2082f9`.
- Static Ghidra references: 3 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0003BDE0`, 466 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (466/466 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 466 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d59ff787614c23878b974c84f925b19cb4c0e26df7caa77f7d6c63ace83f468e`; candidate object SHA-256: `0de69c22ce953e0145c267eae1e5a1337efafbc4b1fe5eea6e4d178f13d517d9`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
