# sub_000CF1A0

- Function task: [#4268](https://github.com/soldieg/ReBLACK-XBOX/issues/4268).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CF1A0-0x000CF4C0 inclusive, contiguous, 801 bytes; evidence `ev_89db655bade33ee1fa4eac1294e83da7a78e26a774e19043ff93b891bb654e8c`.
- Static Ghidra references: 0 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CF1A0`, 801 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (801/801 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 801 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0314fccf6dad8cf1033c7bd3089ac21bc63b804ce4423168760df2149a197287`; candidate object SHA-256: `f3348add6252bf6801c3f8bca581078605750546546233537f88cd49e272052f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
