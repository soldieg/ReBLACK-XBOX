# sub_0021A1EF

- Function task: [#3248](https://github.com/soldieg/ReBLACK-XBOX/issues/3248).
- Batch: 31 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x0021A1EFâ€“0x0021A20E inclusive, contiguous, 32 bytes; evidence `ev_46cb874bce636115c0eb74250af0bc2ae45d2d101952a074f8f8a86878f91d82`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021A1EF`, 32 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (32/32 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 32 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d9d963be6a6bf374385889f41656ace7961c2380de0540d6a0ac5976b6ad6112`; candidate object SHA-256: `9a3ab29d343a2cd37c15358e6dfc70dc683699eb79af6208be51b405069bba2f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
