# sub_001BDB90

- Function task: [#2796](https://github.com/soldieg/ReBLACK-XBOX/issues/2796).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001BDB90–0x001BDBFD inclusive, contiguous, 110 bytes; evidence `ev_b320f7b9300c278eadaa606a8e02308e05a7f3e542f6873924ced6e2ee034321`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001BDB90`, 110 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (110/110 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 110 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3377c94b88a486aafc43ffd53f7e3a780d92a7d57005412323e46d7dd9d299ca`; candidate object SHA-256: `9dca5d31539910a55c1e83f7530b2c5ee93e0596bc57589f8853a2dd2efea0dc`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
