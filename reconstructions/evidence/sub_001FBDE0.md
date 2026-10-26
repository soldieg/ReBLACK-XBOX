# sub_001FBDE0

- Function task: [#3083](https://github.com/soldieg/ReBLACK-XBOX/issues/3083).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FBDE0â€“0x001FBFEF inclusive, contiguous, 528 bytes; evidence `ev_065e2fdc93f54df7aed6540809841b7752320385ab864c800842358e24737aac`.
- Static Ghidra references: 1 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FBDE0`, 528 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (528/528 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 528 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0f4e97f85ee5193e7f09ee66d94da12a8375f2f1b90436a638a47541b909a065`; candidate object SHA-256: `fd0ef1a77477aeb97962b6091c2f26cba5388f8279bdd7e2f2da31c1952f7a7b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
