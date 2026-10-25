# sub_000A8DE5

- Function task: [#4133](https://github.com/soldieg/ReBLACK-XBOX/issues/4133).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A8DE5-0x000A8DEC inclusive, contiguous, 8 bytes; evidence `ev_90360b7824fbd9c2375b434b514e9b099ae720b8097f30910083c73873f57330`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A8DE5`, 8 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (8/8 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 8 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `842fc52e2146e9c70d38db011e4ec93ca5b6f10cf98208acee631d05f98ef0a5`; candidate object SHA-256: `c0f6ef2085e6b74e46d360ace61f44e756d7b4db359bb1a5294c851fea4d8ebe`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
