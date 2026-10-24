# sub_001D0BE0

- Function task: [#2938](https://github.com/soldieg/ReBLACK-XBOX/issues/2938).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001D0BE0â€“0x001D0E3D inclusive, contiguous, 606 bytes; evidence `ev_1d3f87819144b177d951f6d08acf207e0d5f14552e4184445787343da36523fe`.
- Static Ghidra references: 1 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001D0BE0`, 606 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (606/606 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 606 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2d64720a0baba7afd509802e3bb7eecf6867690cf35c5e91cce50627f6077f51`; candidate object SHA-256: `582a6bc1f340e554a83dc7270ddadd7ec19781d4714a9d8225233f43ae7dd47b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
