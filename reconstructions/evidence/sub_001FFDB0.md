# sub_001FFDB0

- Function task: [#3106](https://github.com/soldieg/ReBLACK-XBOX/issues/3106).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FFDB0â€“0x001FFE6E inclusive, contiguous, 191 bytes; evidence `ev_bec892ab215c76a220823ae12b4ed71574fb5919dad97d44955c966f6689581d`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FFDB0`, 191 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (191/191 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 191 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `babf882fde8b5d158661121dbfdd090f9652bfe356aef71a639bc33f1e7d8923`; candidate object SHA-256: `1ce7d0874b76270b9dc9bc46908f75cfb596ef9280f9714534f4a6de4a70bc0c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
