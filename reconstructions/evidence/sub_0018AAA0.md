# sub_0018AAA0

- Function task: [#2562](https://github.com/soldieg/ReBLACK-XBOX/issues/2562).
- Batch: 24 (current ten-batch run: 2/10; 100 functions).
- Ghidra 12.1.3 body: 0x0018AAA0–0x0018AAF6 inclusive, contiguous, 87 bytes; evidence `ev_693b1394ea16008a9d59aa96bfb2cd06da854d5f11f4b7d935ae11ed434417c7`.
- Static Ghidra references: 2 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0018AAA0`, 87 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (87/87 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 87 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8ddb3dbe2d763213f81286e9fc9f0c7068d984dae84f9d1483c0338a61da542a`; candidate object SHA-256: `7b91eb6cf72be021779192c7a01f4ef889ebefcaf8661dfb4410067f478685b6`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
