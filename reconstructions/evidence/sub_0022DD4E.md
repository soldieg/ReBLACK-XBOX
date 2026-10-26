# sub_0022DD4E

- Function task: [#5607](https://github.com/soldieg/ReBLACK-XBOX/issues/5607).
- Batch: 53 (current 100-lot run: 53/100; 100 functions).
- Ghidra 12.1.3 body: 0x0022DD4E-0x0022DF6D inclusive, contiguous, 544 bytes; evidence `ev_95d6011744cb70ffbc550ad12c646e24ee2d858d0cb38894579145cfe4ef3eaa`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0022DD4E`, 544 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (544/544 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 544 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `b9f6447d3d72272401c12384738a7843cea45e481f1e0e2d6f286e82cd1af9a1`; candidate object SHA-256: `66a6a15a6a7a6256c7aad472cbe3b51753df37eec5e7a00165f1ac6db166f4e4`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
