# sub_000A3ABE

- Function task: [#4079](https://github.com/soldieg/ReBLACK-XBOX/issues/4079).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A3ABE-0x000A3B62 inclusive, contiguous, 165 bytes; evidence `ev_ada08c18a308cca31e11b8a99f5717c1bbc77b70164bd0f16fa53204504fb783`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A3ABE`, 165 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (165/165 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 165 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ea6394384b195e53be93faca5432d601d6fdbe42c4991117f29f03cf6ccb5d8f`; candidate object SHA-256: `e0733d0da76d04e47d9d109ee84a258e12975cd6478dc8d6eb941b6034c738f8`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
