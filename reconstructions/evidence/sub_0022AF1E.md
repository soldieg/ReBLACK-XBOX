# sub_0022AF1E

- Function task: [#5589](https://github.com/soldieg/ReBLACK-XBOX/issues/5589).
- Batch: 53 (current 100-lot run: 53/100; 100 functions).
- Ghidra 12.1.3 body: 0x0022AF1E-0x0022AF69 inclusive, contiguous, 76 bytes; evidence `ev_c3bb8b0627dab1adab34f3fb1f563033be1239c45bb842802e1f7897ecfbcabc`.
- Static Ghidra references: 2 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0022AF1E`, 76 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (76/76 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 76 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `77123bf4923e0955e2a7632470868def7d3f25b6015b697823d62c7b6407d6d9`; candidate object SHA-256: `b6384a2c19892508e4518942466508166c3a49ff152b62d753a5c095f26d487a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
