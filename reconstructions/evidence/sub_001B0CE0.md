# sub_001B0CE0

- Function task: [#5185](https://github.com/soldieg/ReBLACK-XBOX/issues/5185).
- Batch: 49 (current 100-lot run: 49/100; 100 functions).
- Ghidra 12.1.3 body: 0x001B0CE0-0x001B0D26 inclusive, contiguous, 71 bytes; evidence `ev_6e16bcf62a23f82444a0936dde285b68d6f0be59af2dadaa6124a867619b3e66`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001B0CE0`, 71 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (71/71 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 71 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ed79adf211ca1b9b0b15d72d90f11db5f3ffd666792481720ddd0a8556f46fed`; candidate object SHA-256: `e2aeeeaffb8eaee835311aa690561d37e94381e54358873ff7a7db23d228d261`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
