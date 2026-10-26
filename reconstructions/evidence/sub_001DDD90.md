# sub_001DDD90

- Function task: [#5257](https://github.com/soldieg/ReBLACK-XBOX/issues/5257).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DDD90-0x001DDE85 inclusive, contiguous, 246 bytes; evidence `ev_09beccfd89958ade8f2bcca6480fd851c7edd3b3cec9ad35897267ac071fb696`.
- Static Ghidra references: 6 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; limitations: none recorded.
- Target candidate: `sub_001DDD90`, 246 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (246/246 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 246 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ea27383b7823e8cc34c405f0eb43cfe33a5e7f051c0e293971dfeb5e46f98fb4`; candidate object SHA-256: `13f35c24934997b47758bdb9c1b4b938f264877d2a44d4601559f5d4deb458e1`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
