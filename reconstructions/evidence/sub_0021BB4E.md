# sub_0021BB4E

- Function task: [#4467](https://github.com/soldieg/ReBLACK-XBOX/issues/4467).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021BB4E-0x0021BBC6 inclusive, contiguous, 121 bytes; evidence `ev_cbef70f12e2241d80015569f1df4c48a488aa13fcf6b231bb6fc34acb5a6169b`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021BB4E`, 121 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (121/121 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 121 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e7523395a0fafd5ab6f18f1c68de7ce23bd3c306d7bad1da7200d13c1938a0fd`; candidate object SHA-256: `175eea569bd394aeddd171389dbf97f1cd67eb1a19c2a8f20c49612e571d1696`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
