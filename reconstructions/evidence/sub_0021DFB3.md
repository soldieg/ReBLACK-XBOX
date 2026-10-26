# sub_0021DFB3

- Function task: [#5396](https://github.com/soldieg/ReBLACK-XBOX/issues/5396).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021DFB3-0x0021DFE8 inclusive, contiguous, 54 bytes; evidence `ev_c82a29ef17a4c5845b9cb47aecded6b505ead4b03262384181b9a6d6a83b854d`.
- Static Ghidra references: 2 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021DFB3`, 54 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (54/54 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 54 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7250fadf60b7ee50572843aae9e68fa6dbfd33c0816b36ace4e3581e34585b34`; candidate object SHA-256: `2b1d556b8cb61d0cdab0f0a386643ef2fa77ed79b3fdb4c9a096cac73579c7ac`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
