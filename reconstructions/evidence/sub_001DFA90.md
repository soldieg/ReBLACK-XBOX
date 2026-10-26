# sub_001DFA90

- Function task: [#5273](https://github.com/soldieg/ReBLACK-XBOX/issues/5273).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DFA90-0x001DFC29 inclusive, contiguous, 410 bytes; evidence `ev_a14321f7e083d0e306d6e58be637da0533a254887474cd53aa8bf54236b34508`.
- Static Ghidra references: 1 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DFA90`, 410 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (410/410 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 410 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `abc78b7e6f0937e83f3d2bfd5168ba82a02a34f7ce6265bd8c81620e215685fd`; candidate object SHA-256: `95e5218f4af2b2f8492d523a46186786e7031781bffe25d9a06a8445fa835471`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
