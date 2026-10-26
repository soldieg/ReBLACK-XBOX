# sub_0027F3DB

- Function task: [#3531](https://github.com/soldieg/ReBLACK-XBOX/issues/3531).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027F3DBâ€“0x0027F41C inclusive, contiguous, 66 bytes; evidence `ev_c55a9caededc63c841be9944f27669121a3d83b655193ab88d9423a7722de3d7`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027F3DB`, 66 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (66/66 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 66 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c5f3c3ffbe0f59ef25575bd294fd36a4aaca83fa62dd697afd614a11b8c77a54`; candidate object SHA-256: `431106deb46bb02d83bb621223ca646384d13c6eb220e11497af5d4aaa784acf`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
