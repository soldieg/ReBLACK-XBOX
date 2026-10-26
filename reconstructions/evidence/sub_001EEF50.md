# sub_001EEF50

- Function task: [#5329](https://github.com/soldieg/ReBLACK-XBOX/issues/5329).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001EEF50-0x001EEFCD inclusive, contiguous, 126 bytes; evidence `ev_f9b319d73e81bd5d938144785aa6b7dbbd2244f4d83708b54277640b5c328c6c`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001EEF50`, 126 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (126/126 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 126 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9eed75db9887a11ff2d78323f17f5278565a4ab9f21904438d423b0f1a234e6f`; candidate object SHA-256: `decce229e108649110ea3b5aba7a22e94d7df9101559fbd6d85e92854a493526`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
