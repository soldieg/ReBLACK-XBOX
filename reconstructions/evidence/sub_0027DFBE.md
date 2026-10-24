# sub_0027DFBE

- Function task: [#3509](https://github.com/soldieg/ReBLACK-XBOX/issues/3509).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0027DFBEâ€“0x0027E006 inclusive, contiguous, 73 bytes; evidence `ev_c99d1902c978fff6ebbcfa844c192cc000ba0415be9afd3029f8022db62612c6`.
- Static Ghidra references: 3 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0027DFBE`, 73 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (73/73 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 73 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `237442e621dc0eb8a328f30445c740363f42befd4cba64b471bde95dd8417dff`; candidate object SHA-256: `7c2f0e962c8bf81394a4e646bf8dabfe3af05f2549a5ee2f020fcc3ca2691bd4`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
