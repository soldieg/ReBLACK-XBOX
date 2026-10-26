# sub_000A2AAE

- Function task: [#4072](https://github.com/soldieg/ReBLACK-XBOX/issues/4072).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A2AAE-0x000A2AC4 inclusive, contiguous, 23 bytes; evidence `ev_937343b62e1e981995fb45df3244b4f1e845784f01256203362fbb0d933f4e0f`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A2AAE`, 23 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (23/23 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 23 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f8e8e9b8d42113c5df681f7aad6d4875e677a73f53d1e08c6364d26ddc2f8543`; candidate object SHA-256: `7b39558c0dca5fec5ea5ef4ccd39a8bcf4d8a282b4691dfdc2e68ed3e0c9094a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
