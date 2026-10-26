# sub_001A2FB0

- Function task: [#5145](https://github.com/soldieg/ReBLACK-XBOX/issues/5145).
- Batch: 49 (current 100-lot run: 49/100; 100 functions).
- Ghidra 12.1.3 body: 0x001A2FB0-0x001A323D inclusive, contiguous, 654 bytes; evidence `ev_3d3bff393ac750756d5a21667df24315a81f2e7a43fc0eb462f0cb805c7b7aab`.
- Static Ghidra references: 0 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001A2FB0`, 654 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (654/654 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 654 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `10cf3d9139be81310ee44f3e24364b42836b16e94a95a4ad0e52042e7ed3e849`; candidate object SHA-256: `af80f5663e7a6ce3a63356701381d214527ffb0bbfea6ce9d86654309d54295b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
