# sub_0005DCC0

- Function task: [#3830](https://github.com/soldieg/ReBLACK-XBOX/issues/3830).
- Batch: 37 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x0005DCC0-0x0005DD5F inclusive, contiguous, 160 bytes; evidence `ev_c82f4e6be5a1844f092e8f5d57aeb2697254259f59c7b539e0c8e1e8ae74b698`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0005DCC0`, 160 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (160/160 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 160 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `034b4c1cfb499215405339531da3405b512136301164c7c437de01b8a0bb946f`; candidate object SHA-256: `cfc7a466f9c9c9f37cc361490e4262abe067d26b10545fca6ba75a74238f4d4b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
