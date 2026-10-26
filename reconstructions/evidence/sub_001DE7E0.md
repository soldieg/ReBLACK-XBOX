# sub_001DE7E0

- Function task: [#5265](https://github.com/soldieg/ReBLACK-XBOX/issues/5265).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DE7E0-0x001DE8B2 inclusive, contiguous, 211 bytes; evidence `ev_558ee93c8d981c5cc2809cdb312eeb10855847697fc08502dcbd3786be804485`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DE7E0`, 211 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (211/211 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 211 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7625db5be4c710490df8e3b6ca24ebf9d836843e43340339330d7d0007f63a7a`; candidate object SHA-256: `161e5503071c53db19b0c87cb59f8d0b13d4ba1befbb9b89d02afd496a1f4401`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
