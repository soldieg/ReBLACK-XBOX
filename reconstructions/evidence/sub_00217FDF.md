# sub_00217FDF

- Function task: [#3189](https://github.com/soldieg/ReBLACK-XBOX/issues/3189).
- Batch: 31 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x00217FDFâ€“0x00217FEF inclusive, contiguous, 17 bytes; evidence `ev_026755e2bcd95c4d397c809865279cff369f79ec371fda502e0a6107ad3aa436`.
- Static Ghidra references: 6 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_00217FDF`, 17 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (17/17 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 17 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d248627c85efaf1df678ea8dda4e6253597c63b731d22b9e21223b2efccb72d1`; candidate object SHA-256: `ef3e308176610ed647355928b130d44dda483821fe9586520c76570736c54cb5`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
