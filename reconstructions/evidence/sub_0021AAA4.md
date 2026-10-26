# sub_0021AAA4

- Function task: [#3259](https://github.com/soldieg/ReBLACK-XBOX/issues/3259).
- Batch: 31 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x0021AAA4â€“0x0021AB08 inclusive, contiguous, 101 bytes; evidence `ev_33d31f29e9b05840338c5afb2712e29c9ce1a6d2068814193c2a719ed49a2ab4`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021AAA4`, 101 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (101/101 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 101 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e5240b89f66fcc0a95f99cff9216648b49257e695328b3f187dcc9bbf9d5a3b1`; candidate object SHA-256: `eda6de56b9bbedc2559a32b6a59e1bdb2140656912924b8fa8911381fd004bbe`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
