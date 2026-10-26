# sub_000CBE00

- Function task: [#4251](https://github.com/soldieg/ReBLACK-XBOX/issues/4251).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CBE00-0x000CBEAA inclusive, contiguous, 171 bytes; evidence `ev_4ea9dafc4dd077fa15eb8ed9067e83dc3e08adc77b4b06f548b957c70503ff91`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CBE00`, 171 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (171/171 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 171 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `93d4226ec9cd5ed39414f14b08f7d3c22197487093d065587dc40d70940a1070`; candidate object SHA-256: `9adcd057021adc94eb2078a58e36012de92c9b686f76a41c2f51cfbe708d4775`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
