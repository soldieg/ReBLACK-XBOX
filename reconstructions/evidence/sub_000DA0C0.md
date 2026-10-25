# sub_000DA0C0

- Function task: [#4333](https://github.com/soldieg/ReBLACK-XBOX/issues/4333).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DA0C0-0x000DA26D inclusive, contiguous, 430 bytes; evidence `ev_89f84bd1a26a567facd9a42ab324c9d23578ba73588ec360fef791f47075ff09`.
- Static Ghidra references: 1 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DA0C0`, 430 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (430/430 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 430 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c39925b61486ecf832226a7b639442723b0385dcfbf00eb5d68a03f80834d85c`; candidate object SHA-256: `568e4ef7f0aa9b78dda4e273a5a45b6eeaa1606a6827e01ee6cb066423cdcd48`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
