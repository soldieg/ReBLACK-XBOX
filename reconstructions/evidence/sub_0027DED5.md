# sub_0027DED5

- Function task: [#3506](https://github.com/soldieg/ReBLACK-XBOX/issues/3506).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027DED5â€“0x0027DEFF inclusive, contiguous, 43 bytes; evidence `ev_74edb564b54e6f7232b1a5360420b582db568b10d26a1cc8284a65ec5a2da6f2`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027DED5`, 43 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (43/43 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 43 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4d99a1abcba09336c89538e53cee4566ffb02ce505689ac1935502ba70633426`; candidate object SHA-256: `2210d2748a9bd4420c90645f696236b328133d69a3c67782b76a7fb26eb6d1bb`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
