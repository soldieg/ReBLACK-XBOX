# sub_00266ABD

- Function task: [#3312](https://github.com/soldieg/ReBLACK-XBOX/issues/3312).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x00266ABDâ€“0x00266ADD inclusive, contiguous, 33 bytes; evidence `ev_c8d56b407ff08615ee4a287ec9ac4e59342ce31e87c8d09c3204208d79c23a95`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_00266ABD`, 33 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (33/33 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 33 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `117d713c46931dfeb362c32aaf6076f16cc0271190db6599781840e9f245b048`; candidate object SHA-256: `14854f6a0f2c6ea69e4e2c69e12c2273458e2c9b8f7c44b3989c3caf3248c46c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
