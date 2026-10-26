# sub_000AFE60

- Function task: [#4980](https://github.com/soldieg/ReBLACK-XBOX/issues/4980).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x000AFE60-0x000AFED5 inclusive, contiguous, 118 bytes; evidence `ev_2d7a3d1051e334d6d1f8b89671a026d8baad640a9ee3ced76533b33ab1d6174c`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_000AFE60`, 118 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (118/118 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 118 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `da1c2ee57097fb3327262557163ba4f32b51d623b1ab86373ada4d22548c58b8`; candidate object SHA-256: `39b40cec4a963188ac7083e9acab49337712cec1046d4c2203bfffd149543907`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
