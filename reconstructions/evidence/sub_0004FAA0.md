# sub_0004FAA0

- Function task: [#3785](https://github.com/soldieg/ReBLACK-XBOX/issues/3785).
- Batch: 36 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x0004FAA0-0x0004FABE inclusive, contiguous, 31 bytes; evidence `ev_4cff3f92eeab977ed37df3bfa7a236783f7826e9c812678084ab8bd52b0842cf`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0004FAA0`, 31 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (31/31 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 31 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3b2bd78074b99749c91bf99acca806d29b6cac8bd2be2a5d23675a87ef2943f1`; candidate object SHA-256: `864a61945955b72deae646ae81a39f2f43f02ad997940c5c345fa57a9c4ae6f1`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
