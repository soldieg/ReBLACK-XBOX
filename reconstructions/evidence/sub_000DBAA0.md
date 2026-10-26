# sub_000DBAA0

- Function task: [#4344](https://github.com/soldieg/ReBLACK-XBOX/issues/4344).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DBAA0-0x000DBAFC inclusive, contiguous, 93 bytes; evidence `ev_652d48cc35ea46d58d02fe206753af9b152e7d3b389b676394138692049ae35e`.
- Static Ghidra references: 5 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DBAA0`, 93 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (93/93 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 93 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8921e7461d904d134ea95ed0867555d061ca5de3c31040815b8b713f0dcfc0df`; candidate object SHA-256: `8ec7bfa0c2b90220e2e2d4d9aa180a907b720b7644a060f9db1c9c2696c1544c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
