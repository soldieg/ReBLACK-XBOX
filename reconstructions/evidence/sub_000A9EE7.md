# sub_000A9EE7

- Function task: [#4146](https://github.com/soldieg/ReBLACK-XBOX/issues/4146).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A9EE7-0x000A9EEE inclusive, contiguous, 8 bytes; evidence `ev_b12bc3f0131ed437a132af33e71cd0062905b5bee9c2d276aedb2cb1856ea3eb`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A9EE7`, 8 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (8/8 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 8 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3139fede7ffd604815fdb6fcf926e7ee18d24cc38055e57f1144fcdae5fdab2e`; candidate object SHA-256: `1a0d7b2680a417b73188687fe2cb0e8f3840408813bef3dce6e1e314104e6f19`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
