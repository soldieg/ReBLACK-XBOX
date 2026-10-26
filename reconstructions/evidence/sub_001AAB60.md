# sub_001AAB60

- Function task: [#2719](https://github.com/soldieg/ReBLACK-XBOX/issues/2719).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AAB60–0x001AABB4 inclusive, contiguous, 85 bytes; evidence `ev_32d5527ecae6aa200f0d2d748c4cf3671399c7351d2914f0dd7216e8c6d5d843`.
- Static Ghidra references: 2 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AAB60`, 85 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (85/85 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 85 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f6c42fd10122217ef2d287608a0f66f378711a3790e12318e9a8769772480c5b`; candidate object SHA-256: `23696e1dacae89f2e7a735d78568ea847a9acdbf1d273c67afa742e9586de919`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
