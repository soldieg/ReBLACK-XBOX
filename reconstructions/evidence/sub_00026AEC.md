# sub_00026AEC

- Function task: [#4703](https://github.com/soldieg/ReBLACK-XBOX/issues/4703).
- Batch: 45 (current 100-lot run: 45/100; 100 functions).
- Ghidra 12.1.3 body: 0x00026AEC-0x00026C50 inclusive, contiguous, 357 bytes; evidence `ev_00abc478aa34190f8de8876d41735d1e04cb91573c2038d4f42734a84f598eb1`.
- Static Ghidra references: 1 caller sites, 8 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; 2 indirect call instructions and 0 incoming sites without a caller owner remain unresolved. Direct call edges were checked against disassembly; complete caller/callee coverage is not claimed.
- Target candidate: `sub_00026AEC`, 357 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (357/357 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 357 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `987ef629040b1dd2bcea0af8bec37f51854430a07171315fbb9e01a0e48f3760`; candidate object SHA-256: `41e97dea6c590dc038e5aec5d9c4f8fa5b6c2964d6897c660e8a14d27909a121`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
