# sub_000CFBE0

- Function task: [#4271](https://github.com/soldieg/ReBLACK-XBOX/issues/4271).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CFBE0-0x000CFC36 inclusive, contiguous, 87 bytes; evidence `ev_446c6490e6636bb72acb3263e54bc51cd353f061c7736f7b7b871432fca45a27`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CFBE0`, 87 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (87/87 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 87 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9911cabeb5419961ad38c29682e65d80a8a0803f745c84125c1f4696eacf567d`; candidate object SHA-256: `f252070204d3ad6a94a03c07609daf647ec38062eef562d1448a72076834db82`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
