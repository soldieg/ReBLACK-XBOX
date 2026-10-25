# sub_0009FDDA

- Function task: [#4046](https://github.com/soldieg/ReBLACK-XBOX/issues/4046).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009FDDA-0x0009FE1C inclusive, contiguous, 67 bytes; evidence `ev_efd0d854a03af92987f4b996ca32d5459e5c5dd58e761752ce74f2444ccb7a01`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009FDDA`, 67 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (67/67 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 67 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `64e122563bdeeee4398a1cedfc3950976808e61a0da6b7504dc1a222b277b37c`; candidate object SHA-256: `aceb3fbfbfefb5b310016b0080bdd0c235ae888ae4989d31959bc677888f3202`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
