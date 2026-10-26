# sub_0008AEB0

- Function task: [#3922](https://github.com/soldieg/ReBLACK-XBOX/issues/3922).
- Batch: 38 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x0008AEB0-0x0008AEF8 inclusive, contiguous, 73 bytes; evidence `ev_4e38b068cb4a2c6016b52fff6b8f1a93d49c3e3e5927c7d184923013fa974930`.
- Static Ghidra references: 3 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0008AEB0`, 73 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (73/73 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 73 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ff0f748e8b2b995455cf15f6d5dbcd463aaab7f8151275b0a54ecd0184f77d68`; candidate object SHA-256: `660d0121476d669c5f62d77c8f771ee3bb5f5259473694b8ab4bca1f2d5fe648`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
