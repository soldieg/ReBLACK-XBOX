# sub_000DF2D0

- Function task: [#4365](https://github.com/soldieg/ReBLACK-XBOX/issues/4365).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DF2D0-0x000DF3F0 inclusive, contiguous, 289 bytes; evidence `ev_6e0cf464d126d6801e71563c63b1f257fae5e51f29e84acafae0726b07f4bf08`.
- Static Ghidra references: 1 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DF2D0`, 289 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (289/289 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 289 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ff0a441c3d366d8490d7ddfcbe057da91cd5e4e17d129ff7a4c2f5f443cc1b14`; candidate object SHA-256: `b7814b0db2f1327f3fa09c075e49d7eeb20bbb9362efe35c8dd673a8cab11f09`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
