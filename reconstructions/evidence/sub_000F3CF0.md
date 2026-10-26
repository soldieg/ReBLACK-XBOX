# sub_000F3CF0

- Function task: [#5030](https://github.com/soldieg/ReBLACK-XBOX/issues/5030).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x000F3CF0-0x000F3DE9 inclusive, contiguous, 250 bytes; evidence `ev_b72e49244f5ab219de06e94577b8e10dfcb53c76c2bc0be03682ed92b816015f`.
- Static Ghidra references: 0 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's caller inventory omits sources of 1 call reference(s) into this function's body..
- Target candidate: `sub_000F3CF0`, 250 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (250/250 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 250 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `892a69a15d4865c98c3316b0f77371f1477111880b4a810d20daf92382d613e2`; candidate object SHA-256: `c5ce58f309ea3757922d07d32891e747cfa44f94965dd14f44d452ab3fc8d974`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
