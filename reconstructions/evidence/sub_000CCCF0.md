# sub_000CCCF0

- Function task: [#4256](https://github.com/soldieg/ReBLACK-XBOX/issues/4256).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CCCF0-0x000CCD9A inclusive, contiguous, 171 bytes; evidence `ev_af55efa5072c6c45d773ce35c48098dbb95cb19008e19edc754a185cdb958540`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CCCF0`, 171 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (171/171 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 171 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `714c94392b6e1be5f6051b8a6877840a8ebdf524e50d7ae11eb20d33277baf02`; candidate object SHA-256: `d097e20fd3fbbfa077b4bc30ec115bddbce0f031dd529cd9ca31d76765ef576b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
