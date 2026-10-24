# sub_00266ADE

- Function task: [#3313](https://github.com/soldieg/ReBLACK-XBOX/issues/3313).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x00266ADEâ€“0x00266AFA inclusive, contiguous, 29 bytes; evidence `ev_a2e4385faf71458b2478e82fdbb65a592ed1dea755f6ed598346a89a551e3c17`.
- Static Ghidra references: 2 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_00266ADE`, 29 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (29/29 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 29 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `b31b394adb817d6c4152a8a4df270e3815b973d8eeae3992292d643e22c31263`; candidate object SHA-256: `273fde4476f696252c7ee9e8df28f819919b1aaddef8952fbf719d1336fe64a4`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
