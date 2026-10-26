# sub_000AA4FA

- Function task: [#4152](https://github.com/soldieg/ReBLACK-XBOX/issues/4152).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000AA4FA-0x000AA57A inclusive, contiguous, 129 bytes; evidence `ev_4777f2903f9584d0e064d7b779e193ee25f1d265d2332bf8b0ebe05bac9c4afa`.
- Static Ghidra references: 1 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000AA4FA`, 129 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (129/129 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 129 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8819054efdb4f76736d3a4b46c8d462e35510d630d74e77eb4134410ef4be9f6`; candidate object SHA-256: `c90690e9005546e3a80d4e593a3c1ef27395d8f65d025f9287636927002dfa56`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
