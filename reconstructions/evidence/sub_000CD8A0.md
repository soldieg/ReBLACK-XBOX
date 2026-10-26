# sub_000CD8A0

- Function task: [#4261](https://github.com/soldieg/ReBLACK-XBOX/issues/4261).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CD8A0-0x000CDD4F inclusive, contiguous, 1200 bytes; evidence `ev_a91575dd27577f477d0cf4c537baf35b2351dac151db1d9ebe49ba49c56a52e3`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CD8A0`, 1200 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1200/1200 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1200 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `60854e15b3ec8f61a3c59cc96bac746c65429c5ce9f836c9a6e34fe1f1af6184`; candidate object SHA-256: `d46397b716704c4e882495c8eec845c959ce27d00e6c8531024f9aad910dee6a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
