# sub_0020DBC0

- Function task: [#3168](https://github.com/soldieg/ReBLACK-XBOX/issues/3168).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x0020DBC0â€“0x0020DC93 inclusive, contiguous, 212 bytes; evidence `ev_e785a15a78f7a44d73eb19ec770a94737a57292b972181cae303f6521909c689`.
- Static Ghidra references: 2 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0020DBC0`, 212 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (212/212 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 212 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `7bb276f0f86488cb98faa308b8995f256a4125361877f87a923c49de71c7cc41`; candidate object SHA-256: `d5f8074b98adcada7bb97b53f84aa8e0bf72ef1b6199b5b29001fda7cabce3e4`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
