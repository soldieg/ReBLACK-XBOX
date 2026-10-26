# sub_001EA6B0

- Function task: [#5319](https://github.com/soldieg/ReBLACK-XBOX/issues/5319).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001EA6B0-0x001EA721 inclusive, contiguous, 114 bytes; evidence `ev_baf2d78c831ecad65674e8973a6e51c6a186bba46d9555b525ec909ee19000af`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001EA6B0`, 114 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (114/114 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 114 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f7dd6e3c7e93633169de37edceb80ff3411568568232aae508a7195fb002723f`; candidate object SHA-256: `0db643afbf05a82c84de0ce0578d506fdf8fbcdf5af9535ca1e2e53f29a419ad`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
