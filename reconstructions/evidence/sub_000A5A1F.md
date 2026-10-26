# sub_000A5A1F

- Function task: [#4102](https://github.com/soldieg/ReBLACK-XBOX/issues/4102).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A5A1F-0x000A5A91 inclusive, contiguous, 115 bytes; evidence `ev_3490b1209e9eac8be2a1988a8275803ffb34600357bcf21e8d8fec033d48a191`.
- Static Ghidra references: 5 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A5A1F`, 115 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (115/115 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 115 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `47b496610b13dafcdab4f82a6160f95309401c173ff67e029229635430d97868`; candidate object SHA-256: `743f6cb530da802407ce61ff291535714fd9f0356cf0813609b4d14306e49296`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
