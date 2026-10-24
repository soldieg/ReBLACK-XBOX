# sub_001FCEA0

- Function task: [#3092](https://github.com/soldieg/ReBLACK-XBOX/issues/3092).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FCEA0â€“0x001FD016 inclusive, contiguous, 375 bytes; evidence `ev_295c625ecc17fb76a70853e455bd516c86ea3aa945f824f06d65554281f4c846`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FCEA0`, 375 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (375/375 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 375 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d0b9f11db603a704c23743936b618b65f97a1abfed1e575cba91221c629cf971`; candidate object SHA-256: `3e3943abed6fe7ac136a998ec542136612c09eb31e57a49c820da4a61e225b8f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
