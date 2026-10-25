# sub_000C1BA0

- Function task: [#4221](https://github.com/soldieg/ReBLACK-XBOX/issues/4221).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000C1BA0-0x000C1BBB inclusive, contiguous, 28 bytes; evidence `ev_297fca7605b01bdcf967d6afdeb32900aa06fdf3ba33cd3c598d6cfe9742ee59`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000C1BA0`, 28 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (28/28 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 28 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `423ae1a243f509bb99116f8560070bafd0d7b29a80add7f33767f56a4c172d7b`; candidate object SHA-256: `0dcbd7afcd3935223bd8ab93785fa9b94be633f70cfa2e3c76f9165a23b23169`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
