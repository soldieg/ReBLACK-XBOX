# sub_0019DDA0

- Function task: [#5094](https://github.com/soldieg/ReBLACK-XBOX/issues/5094).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x0019DDA0-0x0019DF47 inclusive, contiguous, 424 bytes; evidence `ev_e4ac45f6703b5d3b0cd20a1413d33bde43a02958c8db1eb8c763d6f8b38b735e`.
- Static Ghidra references: 0 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0019DDA0`, 424 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (424/424 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 424 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8e8339c42013687470bc7eb920b2c30b9bd7b648d8bf898c293d52a4fb0a3031`; candidate object SHA-256: `e9d1beb41b948bc2698326ca423e8fcfe93fd0f5061cac443568666307414be5`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
