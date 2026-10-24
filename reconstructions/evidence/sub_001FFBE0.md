# sub_001FFBE0

- Function task: [#3105](https://github.com/soldieg/ReBLACK-XBOX/issues/3105).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FFBE0â€“0x001FFDA2 inclusive, contiguous, 451 bytes; evidence `ev_c31f90af65db3f77de03824aabc2e205f5194bde3dc0f8954cc21927d62c461b`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FFBE0`, 451 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (451/451 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 451 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2bcb9861a8e954b77008a52b43a5b8abb7812923a0999f161dbed79c9d000762`; candidate object SHA-256: `0a29323fc60f9dbafc74485c892d9abbaf50252c89ad69d32b6b18f68fa6973f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
