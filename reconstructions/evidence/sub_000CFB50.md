# sub_000CFB50

- Function task: [#4270](https://github.com/soldieg/ReBLACK-XBOX/issues/4270).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CFB50-0x000CFBDD inclusive, contiguous, 142 bytes; evidence `ev_c5d50c7b0e07fb78175337ab0dd2e0a0985c1b55d56d345488f45b776679fdeb`.
- Static Ghidra references: 6 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CFB50`, 142 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (142/142 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 142 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e69231de59bcd8ee088aa9341a19667dd26004fb1f4b1038390997ba6e4a8add`; candidate object SHA-256: `3e4083a4eaffcdb743f4570c52cbd3d3e83865140b5fa4f1f302ee7a679dd6bb`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
