# sub_0020BBC0

- Function task: [#3165](https://github.com/soldieg/ReBLACK-XBOX/issues/3165).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x0020BBC0â€“0x0020BC35 inclusive, contiguous, 118 bytes; evidence `ev_7bdcf67956f3240caa089f29b5112d14b5477d033827baf338f1c02b8c848ee1`.
- Static Ghidra references: 0 caller sites, 7 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0020BBC0`, 118 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (118/118 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 118 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `236449a06a8ce1358bf54a6b394a1d2737d1ae9f268499ce6777a31f8e0fe1a0`; candidate object SHA-256: `d57561b77e745c068f006e68e1370ac7456ae77d489a7c7fc60f85b212e072b2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
