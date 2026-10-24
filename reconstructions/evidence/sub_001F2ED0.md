# sub_001F2ED0

- Function task: [#2989](https://github.com/soldieg/ReBLACK-XBOX/issues/2989).
- Batch: 29 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x001F2ED0â€“0x001F2F11 inclusive, contiguous, 66 bytes; evidence `ev_02683b25e9758e0f80ed654239eae6d2bf639cbd38f7b61f10e5361f04680aec`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001F2ED0`, 66 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (66/66 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 66 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `82cbc0201115e20bc0c3e8d51ee8303f522a95216516a46b66075d1c22e831a8`; candidate object SHA-256: `6aadffdcc27ba7dbf4f126925430df11312e05aa86b5651550d21001bbdb31b8`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
