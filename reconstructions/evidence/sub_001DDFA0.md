# sub_001DDFA0

- Function task: [#5260](https://github.com/soldieg/ReBLACK-XBOX/issues/5260).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DDFA0-0x001DE03F inclusive, contiguous, 160 bytes; evidence `ev_ebd7ea6e260369573386dc877c5df50588e13f6dde65f05dcde84b5551dcb870`.
- Static Ghidra references: 1 caller sites, 7 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DDFA0`, 160 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (160/160 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 160 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `90e231c60cd6fb9ce83f0261b1d10c8c369df3d0bfb1aa629b5e5777c6958fa3`; candidate object SHA-256: `0f3500af7f7b823471aaae5a626f404537a1deb04a7e35185429c35e18bc4b7a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
