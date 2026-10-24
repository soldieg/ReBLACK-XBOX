# sub_001A7BD0

- Function task: [#2684](https://github.com/soldieg/ReBLACK-XBOX/issues/2684).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001A7BD0–0x001A7C38 inclusive, contiguous, 105 bytes; evidence `ev_af5b412a1f6d61d889ebe3f6e300d7a2224cbaa139e0dbd871b0e814a6444415`.
- Static Ghidra references: 4 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001A7BD0`, 105 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (105/105 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 105 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d6206c11a2a4babca8236b6df1fd0cdfcc0a39ffe8455afe06271f92647552d0`; candidate object SHA-256: `812f4e15a64bce117d7cd4d3e31781d290afb80f1cc822d00ec984e1ebb6a0b0`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
