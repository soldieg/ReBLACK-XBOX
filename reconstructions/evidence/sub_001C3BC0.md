# sub_001C3BC0

- Function task: [#2836](https://github.com/soldieg/ReBLACK-XBOX/issues/2836).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001C3BC0–0x001C3C27 inclusive, contiguous, 104 bytes; evidence `ev_fce03c9a8e03eb4465da6f701378bab0face5d826c95820cc88d5239f401f913`.
- Static Ghidra references: 2 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001C3BC0`, 104 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (104/104 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 104 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `1a126714cb4ab241967f63842cc909d27e399b0ee177529fc707c96f14ba8711`; candidate object SHA-256: `32080dedfa93619966b8b56be19a56ee30b5ab15d72f6104986b8d69879c1e49`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
