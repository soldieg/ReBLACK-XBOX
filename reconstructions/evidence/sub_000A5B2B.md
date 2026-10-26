# sub_000A5B2B

- Function task: [#4106](https://github.com/soldieg/ReBLACK-XBOX/issues/4106).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A5B2B-0x000A62CE inclusive, contiguous, 1956 bytes; evidence `ev_230d3012e04338314d7fbd6cafcd11c0d279422e318af38b0545aa5b1e915730`.
- Static Ghidra references: 2 caller sites, 8 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A5B2B`, 1956 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1956/1956 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1956 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `22afb81f8d535b0c7a265eb283deff89f2426d009f54bde1bdbaf3aa60ffecd8`; candidate object SHA-256: `bbf1d009b13858d684a31aba027309746073e3beb132288fedc958f050fabce0`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
