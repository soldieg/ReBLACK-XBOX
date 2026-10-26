# sub_00219BAD

- Function task: [#3234](https://github.com/soldieg/ReBLACK-XBOX/issues/3234).
- Batch: 31 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x00219BADâ€“0x00219BC9 inclusive, contiguous, 29 bytes; evidence `ev_ea46f6db075e63cfd73225d9551f550a9a67acdb56aa337cd90807eaad416aab`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_00219BAD`, 29 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (29/29 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 29 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `1a8e0406bb005f6a27673b6f607e6f255ccd912b8375cd6385af21b8f531d784`; candidate object SHA-256: `9e93398c3bdeb520df8fed6dd3f282ed69d79ac6c6235f329000111feb441622`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
