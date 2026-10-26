# sub_0019BEF0

- Function task: [#5068](https://github.com/soldieg/ReBLACK-XBOX/issues/5068).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x0019BEF0-0x0019BF51 inclusive, contiguous, 98 bytes; evidence `ev_cda80b91116a5c0b3fb261f53a25312c0844f7f78481c6d15e21b8f117c2654a`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0019BEF0`, 98 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (98/98 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 98 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4b76e31470c49fe59c032cd52da7acf99dfc59bb43420ba9a56cfd2cf56dd512`; candidate object SHA-256: `01dd8a964654f1d1416cd810ebeaa69763bac03d968d524b3bc9b808bd1cb63a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
