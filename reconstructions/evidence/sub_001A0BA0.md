# sub_001A0BA0

- Function task: [#5122](https://github.com/soldieg/ReBLACK-XBOX/issues/5122).
- Batch: 49 (current 100-lot run: 49/100; 100 functions).
- Ghidra 12.1.3 body: 0x001A0BA0-0x001A1381 inclusive, contiguous, 2018 bytes; evidence `ev_0b45d23d40b223e7a787f4fbea1eecfe5932d64556d3d322e6a2ad21d7dcd010`.
- Static Ghidra references: 1 caller sites, 23 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001A0BA0`, 2018 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (2018/2018 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 2018 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ee20f91cbc487bf89edaa46293e0e66305d5ce384200bf7f2b557914ba2a6b83`; candidate object SHA-256: `2a98cfa0634d02c2e063e03141b7338ec3a523e37c2d9b14d00ed2933a745d75`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
