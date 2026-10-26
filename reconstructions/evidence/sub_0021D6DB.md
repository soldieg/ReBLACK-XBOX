# sub_0021D6DB

- Function task: [#5383](https://github.com/soldieg/ReBLACK-XBOX/issues/5383).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021D6DB-0x0021D785 inclusive, contiguous, 171 bytes; evidence `ev_c22f45ee8e18f3482da11c525969fbbebbf31c741ca31852c58db8fec4685ad4`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021D6DB`, 171 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (171/171 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 171 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `50d7f321e38e0cbdbbb896f1f4a75656bd53ffa6348f8d8a6844a1cd72d792e2`; candidate object SHA-256: `022957c67475f4f18c5947e524a0482df165f4299c37aa873fd5a5385833c6b3`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
