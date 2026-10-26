# sub_001C9BD0

- Function task: [#2875](https://github.com/soldieg/ReBLACK-XBOX/issues/2875).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001C9BD0–0x001C9DCA inclusive, contiguous, 507 bytes; evidence `ev_b3c9cb276c1439b962c011b266bae5158b01e9eba3d451e675d1f39c9f0bca5f`.
- Static Ghidra references: 0 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001C9BD0`, 507 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (507/507 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 507 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7871baff2346fdf3c3393b513567097b6e7b57e9b114f50ff37842ad04ae94ba`; candidate object SHA-256: `22b4659dad8a695764eb8d02bcbedd6dd5034ae6ddf660774752e3441f939389`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
