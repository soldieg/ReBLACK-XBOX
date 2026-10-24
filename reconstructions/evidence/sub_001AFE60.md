# sub_001AFE60

- Function task: [#2774](https://github.com/soldieg/ReBLACK-XBOX/issues/2774).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AFE60–0x001B0027 inclusive, contiguous, 456 bytes; evidence `ev_6c905d22e88cd1cc8823d4d6ad8eac7f7b13ec732b3136c3280a7d998b021570`.
- Static Ghidra references: 1 caller sites, 7 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AFE60`, 456 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (456/456 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 456 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `644e563ae17adf14a96aeac87dcf08df1bd3e69d40d8919f0be85e02e43817f6`; candidate object SHA-256: `3ae109f510755ec5e4a9e4bef91dfd26278e31aebaa7dda52e05bdade81bae77`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
