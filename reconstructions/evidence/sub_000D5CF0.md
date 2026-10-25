# sub_000D5CF0

- Function task: [#4306](https://github.com/soldieg/ReBLACK-XBOX/issues/4306).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000D5CF0-0x000D5EDA inclusive, contiguous, 491 bytes; evidence `ev_1252e5404160a49d6c2027a7c548979dd099c9629a9454a494235b8b2c226b7a`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000D5CF0`, 491 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (491/491 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 491 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e221f5d427236b2088e4b9d36201d443d70edf6615d2930486f86ed5c55ca754`; candidate object SHA-256: `665404ea00b8cb1d27fc0206ede35fbed4c4943a8f4b177277f74528af264bfa`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
