# sub_0021BABE

- Function task: [#4466](https://github.com/soldieg/ReBLACK-XBOX/issues/4466).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021BABE-0x0021BB4D inclusive, contiguous, 144 bytes; evidence `ev_6aefe358513cd1dc7a666225925c0cd75ea3c5035a717bd5b688357b1fd63a53`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021BABE`, 144 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (144/144 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 144 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `de24b0deca865a2be0f3f98430eb4d869aecdad53df5b04539d2fbc9136cc2c1`; candidate object SHA-256: `172cde96095776f7814cffdfabbb68eb4dade49a64bcb930121b4c7cee9ddc55`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
