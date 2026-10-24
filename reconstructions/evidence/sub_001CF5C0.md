# sub_001CF5C0

- Function task: [#2926](https://github.com/soldieg/ReBLACK-XBOX/issues/2926).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CF5C0â€“0x001CF688 inclusive, contiguous, 201 bytes; evidence `ev_1515dcd167819542f3b7e901daddd7f481f9236d2a2606e1feed3ab33dc39c78`.
- Static Ghidra references: 2 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CF5C0`, 201 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (201/201 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 201 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `5da127c6e871d4eef14386ed49402471c8cadf7e94f63bf0cf87bfd2e05576cd`; candidate object SHA-256: `4a7033c8e6e4b9e3133fb0da5049b48154633604bf02bad06da06b7b5018fffd`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
