# sub_0021CAFD

- Function task: [#5366](https://github.com/soldieg/ReBLACK-XBOX/issues/5366).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021CAFD-0x0021CC3B inclusive, contiguous, 319 bytes; evidence `ev_e5bd56550065223f705fcfcb39a2c896ed80d8a7c37d5ba76d38291a592e006a`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021CAFD`, 319 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (319/319 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 319 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `cb3493ddf45824d347427dfea903ea37effb6b55b766db33801a9c423de2a40b`; candidate object SHA-256: `00edf966de17890abf685376c284de7a3e838bf958ab1ce9ab85fa109fc66317`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
