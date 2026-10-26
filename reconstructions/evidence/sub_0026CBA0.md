# sub_0026CBA0

- Function task: [#3393](https://github.com/soldieg/ReBLACK-XBOX/issues/3393).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0026CBA0â€“0x0026CC01 inclusive, contiguous, 98 bytes; evidence `ev_bba5d915c2b57ec21c2c9c1cbcaf782cdb8a5ec4c27a43a5ebb37c3a27fbb7a9`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0026CBA0`, 98 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (98/98 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 98 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7bf54b47851eb7da51c9f783a07d3185d35f6130140d6f3388dccedecfdcf28f`; candidate object SHA-256: `152420920c80a551902f3ccb629ab14e40998c0894ddf469d5a17d9cec961320`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
