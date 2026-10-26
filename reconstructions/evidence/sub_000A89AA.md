# sub_000A89AA

- Function task: [#4131](https://github.com/soldieg/ReBLACK-XBOX/issues/4131).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A89AA-0x000A8B88 inclusive, contiguous, 479 bytes; evidence `ev_072a31009df16338eb125602ce477bb1a8ab309e0282e128fa4080026a3849e0`.
- Static Ghidra references: 1 caller sites, 9 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A89AA`, 479 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (479/479 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 479 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6bc5f671c9a371c05e948b660dac5b6f570f622a6332e837606d3699f9cd55ca`; candidate object SHA-256: `41fce5c09f0ba4b9dcafa98df347a623089c0dd18ebb27ab32f5d9aae28cbb09`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
