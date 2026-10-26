# sub_001FB3F0

- Function task: [#5353](https://github.com/soldieg/ReBLACK-XBOX/issues/5353).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001FB3F0-0x001FB4B5 inclusive, contiguous, 198 bytes; evidence `ev_89f6a1966492690c27313394a0f1b78fe1a72220c654dd9d2358c10f0dfb0d18`.
- Static Ghidra references: 2 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001FB3F0`, 198 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (198/198 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 198 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `39a8a0cf21db6a4b2ad3cab1d3cd804052f6f34d4aec5f3b1b598e71dbdc02da`; candidate object SHA-256: `23c75fc72f7697d0bc0342b4db71b4d8fb27bd1c77e372349c8cbfb3d2cef01e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
