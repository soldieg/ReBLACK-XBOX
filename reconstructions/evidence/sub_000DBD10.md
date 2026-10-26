# sub_000DBD10

- Function task: [#4348](https://github.com/soldieg/ReBLACK-XBOX/issues/4348).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DBD10-0x000DBD93 inclusive, contiguous, 132 bytes; evidence `ev_f5659ca52b04d7c721032312a45636dda4f2ecc7469cf1011eb799fc3c42688b`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DBD10`, 132 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (132/132 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 132 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `35347f574a9ea5c1516545fe957e0046c0b5c343980975aa0ffd0e6e6860defd`; candidate object SHA-256: `98c5069a91e2d1aefa1317bcc24f0924f5de37f1b9a15afdc4d724ca1641550c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
