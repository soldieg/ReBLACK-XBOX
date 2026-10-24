# sub_0021AA7F

- Function task: [#3258](https://github.com/soldieg/ReBLACK-XBOX/issues/3258).
- Batch: 31 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x0021AA7Fâ€“0x0021AAA3 inclusive, contiguous, 37 bytes; evidence `ev_246d5e3196617863d6ac9c7f030297c06ad9e588dea61a98e5d757b93c4b0bb7`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021AA7F`, 37 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (37/37 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 37 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `69f907188d2630f00a15ee458c6d1e9639648cf91d2e4bf91f6774f412e3c81b`; candidate object SHA-256: `1e342a5f1c712d68a2e2dcbe22b8fad44cf1526616289c44e5ddd5c778f99225`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
