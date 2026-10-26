# sub_0005AEC0

- Function task: [#5729](https://github.com/soldieg/ReBLACK-XBOX/issues/5729).
- Batch: 55 (current 100-lot run: 55/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0x5aed1, 0x5aee1, 0x5aefb, 0x5af20; destinations for listed sites remain unresolved; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x0005AEC0-0x0005AF7E inclusive, contiguous, 191 bytes; evidence `ev_bb80dcb35f77a70c0974613ec7684394eedb4d433e24119331a0b3c82c3ff957`.
- Static Ghidra references: 2 caller sites, 2 resolved direct callees; call instructions without a resolved target: 4. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's callee inventory omits targets of 4 call reference(s) or decoded call(s) without destinations.
- Target candidate: `sub_0005AEC0`, 191 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (191/191 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; 99 new address-pinned emitters compiled without warnings; the pre-existing sub_00035DC0.c compiled with four MSVC C4100 unused-parameter warnings. No errors occurred.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 191 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `21e72565fc77d461dd14f696bcea0490a4a6e94884f216b66ea1a3d2d8588ddb`; candidate object SHA-256: `cba693a3c38bf6ebfe1eb509b1eb09e66eb77c60adf5327b57106c7abcbff31d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
