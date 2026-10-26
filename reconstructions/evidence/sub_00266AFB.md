# sub_00266AFB

- Function task: [#3314](https://github.com/soldieg/ReBLACK-XBOX/issues/3314).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x00266AFBâ€“0x00266B5B inclusive, contiguous, 97 bytes; evidence `ev_94466c62afe5199dc11302603ab1487108c4ad25a1006db27160b26e935a75ad`.
- Static Ghidra references: 2 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_00266AFB`, 97 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (97/97 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 97 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e4dc43bbc33c579d2e062561d619919bf5ede464db425977303485d304c84a3a`; candidate object SHA-256: `2135c8ab676973b8a613d95d4ee7aefd70a21c5a212368655babaa31e9c2b716`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
