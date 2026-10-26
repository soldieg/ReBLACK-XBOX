# sub_0018EBB0

- Function task: [#2605](https://github.com/soldieg/ReBLACK-XBOX/issues/2605).
- Batch: 25 (current ten-batch run: 3/10; 100 functions).
- Ghidra 12.1.3 body: 0x0018EBB0–0x0018EC2D inclusive, contiguous, 126 bytes; evidence `ev_e0de55625e14737b3d703d02ae8cf016e9559e8dee0323456ccf7c5c2b8e3ec6`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0018EBB0`, 126 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (126/126 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 126 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `616f08d288d163aae571a312fcb34473464ea7c7bade9ab14eea4b1ac6aafbb7`; candidate object SHA-256: `5b166d2f4bd3fdd533c2656e7b2a5ea6f240500b4a0e4d056c8a33d763878493`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
