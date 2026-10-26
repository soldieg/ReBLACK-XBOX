# sub_000CDFD0

- Function task: [#4264](https://github.com/soldieg/ReBLACK-XBOX/issues/4264).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CDFD0-0x000CDFF7 inclusive, contiguous, 40 bytes; evidence `ev_1996b78284041687a39ce6ac4f2a6320b17f5105fb2136e39456b30b6a27886f`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CDFD0`, 40 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (40/40 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 40 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `505006ef4bdca46cdbc513abe89906871070dbf297d70bcff40a9fdb9d430a72`; candidate object SHA-256: `34590f5807d3bf49c08a8eed6f916a2454a99725a6bac5e6a99c9f15d3fa9a43`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
