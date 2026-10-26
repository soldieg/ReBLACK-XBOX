# sub_0021B9AD

- Function task: [#4465](https://github.com/soldieg/ReBLACK-XBOX/issues/4465).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021B9AD-0x0021BABD inclusive, contiguous, 273 bytes; evidence `ev_5535572786b36af6987888fb17e6eb8565924bd76b4bb20097e50704588c59a8`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021B9AD`, 273 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (273/273 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 273 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `03e5cce299de922cdfd042748d1f924880d920cabad0de268878072553b7c03c`; candidate object SHA-256: `78168c89ee43285fb0fa0d63380b7dfa0eab949ec600bd3f20864fd43d9a0518`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
