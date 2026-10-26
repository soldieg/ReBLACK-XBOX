# sub_000A9DF8

- Function task: [#4145](https://github.com/soldieg/ReBLACK-XBOX/issues/4145).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A9DF8-0x000A9E3D inclusive, contiguous, 70 bytes; evidence `ev_70af9a455993e93783a514ca0452898eda0ee8ceb9d167616fa4b3047289700a`.
- Static Ghidra references: 1 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A9DF8`, 70 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (70/70 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 70 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `5932e4fe6660032096cadbe2c142e878f250ed870fc11d10a1f07425407d8470`; candidate object SHA-256: `624242ad0dfa9d670852a6ccb59731f15b881396119cf8c50c20b0a3bf2a26b6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
