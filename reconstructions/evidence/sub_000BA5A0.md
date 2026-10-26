# sub_000BA5A0

- Function task: [#4178](https://github.com/soldieg/ReBLACK-XBOX/issues/4178).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BA5A0-0x000BA5C0 inclusive, contiguous, 33 bytes; evidence `ev_2346d324165e18f2d603dafbdc8adb0462bf947b0afdd7329cc19ee0cdc7bcdc`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BA5A0`, 33 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (33/33 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 33 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a1388ee5e29d33faa11d6ba2056e8c45430cf24296b99c9861201717cc13ab49`; candidate object SHA-256: `f98e65f374afad4986c6dba855226b5ebe300c1b0cbe4c1084e288aad5d70bcc`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
