# sub_001CCE70

- Function task: [#2903](https://github.com/soldieg/ReBLACK-XBOX/issues/2903).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CCE70â€“0x001CCF4C inclusive, contiguous, 221 bytes; evidence `ev_532bd91c41ef21be0b3e56c39683e9d4b6640337ae19d1de0e89b838e6543106`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CCE70`, 221 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (221/221 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 221 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `802d5fb2b90f231b4509d58da3de39bc237fe862ffcdbe6ff5353a9321e79968`; candidate object SHA-256: `721cb17229b9f442d992a5d8c9a9f51235fb7a778f2bccfb63b97529abbeb636`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
