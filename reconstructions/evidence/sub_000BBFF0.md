# sub_000BBFF0

- Function task: [#4190](https://github.com/soldieg/ReBLACK-XBOX/issues/4190).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BBFF0-0x000BC048 inclusive, contiguous, 89 bytes; evidence `ev_5cf265b213dc94d38bb2b65f452d7257aea496a58ea40bfaeaad9811d158c08b`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BBFF0`, 89 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (89/89 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 89 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `805079a1bfa5d291443ad1d48a2ab14fa8e154373e4c663640a478c062c7e863`; candidate object SHA-256: `3752c3b2ad0064b33fb777b513a10e60be8a1948087978b7ffa49bd76995e55a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
