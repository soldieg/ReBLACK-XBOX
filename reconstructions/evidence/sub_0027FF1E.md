# sub_0027FF1E

- Function task: [#3549](https://github.com/soldieg/ReBLACK-XBOX/issues/3549).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027FF1Eâ€“0x0027FF9E inclusive, contiguous, 129 bytes; evidence `ev_e1042ef8c296fa98bd0f8520b7750a2cda9d2616fcd8f680f0e8656958b4f637`.
- Static Ghidra references: 2 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027FF1E`, 129 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (129/129 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 129 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a3c750b38cbb6d165108b48980fd2eb647ef04e60ab22a11516852038b56950c`; candidate object SHA-256: `101cf613465feac6f2543bed06eaf6e000dacbf349b5a0e8a2c5ae14b8cc4bf5`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
