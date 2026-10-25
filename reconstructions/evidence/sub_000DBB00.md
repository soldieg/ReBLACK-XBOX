# sub_000DBB00

- Function task: [#4345](https://github.com/soldieg/ReBLACK-XBOX/issues/4345).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DBB00-0x000DBB5C inclusive, contiguous, 93 bytes; evidence `ev_ae182ece54fa6507223880f3fe90088621438ad9411d44016cb4f14c1fd04a83`.
- Static Ghidra references: 2 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DBB00`, 93 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (93/93 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 93 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8a45786f75ffbd754b0709a70910aa9541ec61b4b99b7e59acd5fbb2aca664d7`; candidate object SHA-256: `44f527aafd493b04524f667089fde6e7791155a2b810bc0f79a1fee20ff55a74`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
