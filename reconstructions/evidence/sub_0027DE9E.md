# sub_0027DE9E

- Function task: [#3505](https://github.com/soldieg/ReBLACK-XBOX/issues/3505).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027DE9Eâ€“0x0027DED4 inclusive, contiguous, 55 bytes; evidence `ev_602054455f39a83195f7e4641d3f09a9ac257200db06997375b50f087c55b257`.
- Static Ghidra references: 3 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027DE9E`, 55 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (55/55 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 55 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3009ab68e96bb952d2e5a5771d12a2d4ee6c7254278eaf62e33a2cf3a03d71ae`; candidate object SHA-256: `24f370089c97c30fa97ff3962090e27e5851fa5df451dabd0a0b9bad0379145d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
