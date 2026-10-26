# sub_0026AAA0

- Function task: [#3357](https://github.com/soldieg/ReBLACK-XBOX/issues/3357).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0026AAA0â€“0x0026AAD8 inclusive, contiguous, 57 bytes; evidence `ev_54789bbe2d60bb2827e609bd4570d9d34c2162f3fe47f8e115e10cd7b49fb55e`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0026AAA0`, 57 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (57/57 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 57 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f61b9c78c68de6343384c9617f29089704308cea9b21bc81acc3bf535bb438be`; candidate object SHA-256: `53704efefe7fa2fed7c3b98567247bdd78fbd4aab25e2d5e7dc5e27a893bf0a9`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
