# sub_0005DCA0

- Function task: [#3829](https://github.com/soldieg/ReBLACK-XBOX/issues/3829).
- Batch: 37 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x0005DCA0-0x0005DCBC inclusive, contiguous, 29 bytes; evidence `ev_090628a4dd7c8a2aac2553ea3a7597a5902d66bce6a9331fc9bfa0b09afb3a2d`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0005DCA0`, 29 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (29/29 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 29 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `732483526f2808fa0bd21f648680e2943754c64001f4643967d6ce3760d9f095`; candidate object SHA-256: `94e83744fc2563ebc81620668f782a90bf8050bde93eb255642c887fbb41cdab`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
