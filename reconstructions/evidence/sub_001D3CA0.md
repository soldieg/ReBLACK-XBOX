# sub_001D3CA0

- Function task: [#2960](https://github.com/soldieg/ReBLACK-XBOX/issues/2960).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001D3CA0â€“0x001D3EDB inclusive, contiguous, 572 bytes; evidence `ev_fd3154d54f4989affd17b3821f2a3689c3926a3afee6d5f710dff67c3bcca6e0`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001D3CA0`, 572 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (572/572 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 572 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `829aa85542ba64ec76e706de8474e8f8de689bef294b76bd2ab2b8a1c0dcd05f`; candidate object SHA-256: `d33d1d23502a0a91717c20619c5914ec5e16948180a257f0cc22138f90c31db0`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
