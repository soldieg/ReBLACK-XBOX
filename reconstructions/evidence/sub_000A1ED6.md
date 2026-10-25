# sub_000A1ED6

- Function task: [#4068](https://github.com/soldieg/ReBLACK-XBOX/issues/4068).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A1ED6-0x000A1F2D inclusive, contiguous, 88 bytes; evidence `ev_99b8b71cf8a4109441508642c4b4032a7631e8e2ad800ecfc761396b4a8fba5c`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A1ED6`, 88 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (88/88 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 88 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `05381fdd31f7d8c18fb6198f2350e605fc7925b1439f026f0b10a18d98baeabe`; candidate object SHA-256: `5748eb9ccbc8bb6340eac52a371f61cc59ede2396cc24924385fbf7a1f4e20ff`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
