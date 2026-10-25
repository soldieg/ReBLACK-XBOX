# sub_0021B8CC

- Function task: [#4463](https://github.com/soldieg/ReBLACK-XBOX/issues/4463).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021B8CC-0x0021B961 inclusive, contiguous, 150 bytes; evidence `ev_8d7a807c42e01444d1e59770e58975b1882ba5b832fcdeae8e345cb21173eb32`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021B8CC`, 150 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (150/150 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 150 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `51eef89e3f7b735039d4de68c23b3d20c04b8dd851986d85c455a707adeae438`; candidate object SHA-256: `c04d8e15480c875d7631e2bebaca17e4a948b57b30434554a8b71422af05afa6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
