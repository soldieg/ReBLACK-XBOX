# sub_0027EF7E

- Function task: [#3518](https://github.com/soldieg/ReBLACK-XBOX/issues/3518).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027EF7Eâ€“0x0027EF94 inclusive, contiguous, 23 bytes; evidence `ev_ca3a93b5bf0c6d1c356216e0bcd57ecea455acde64c7c6ab218e80b37c3e0147`.
- Static Ghidra references: 6 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027EF7E`, 23 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (23/23 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 23 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `196106b05fcc3b944ac348d2ce04ea854dcc63d5a95f78d8b34f2d69bafba189`; candidate object SHA-256: `f354852e52a842c38c56d6775cb9b53b18cf019e3fd16844f080d757eb2fc67c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
