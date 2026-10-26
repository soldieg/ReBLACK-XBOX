# sub_0009ED6C

- Function task: [#4036](https://github.com/soldieg/ReBLACK-XBOX/issues/4036).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009ED6C-0x0009EE4B inclusive, contiguous, 224 bytes; evidence `ev_b779eaffdc4598e2f7b4cefdba754cae078c879edd0f0457ccd0a73ad34d3277`.
- Static Ghidra references: 0 caller sites, 8 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009ED6C`, 224 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (224/224 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 224 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4fa184ad0fc91b20ab301b419360279143d473a6bcee5140798998bb5d75f3a4`; candidate object SHA-256: `650f29e227968a7782157ca6e82b271bf4096863df388fd867a10f1977a5600e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
