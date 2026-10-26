# sub_001BF4E0

- Function task: [#2803](https://github.com/soldieg/ReBLACK-XBOX/issues/2803).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001BF4E0–0x001BF586 inclusive, contiguous, 167 bytes; evidence `ev_2000cf86de476a5c140da274a488a8022f008acd915baa67c642ae42e507249f`.
- Static Ghidra references: 2 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001BF4E0`, 167 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (167/167 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 167 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9cff4ca9e667a1d7b5c96bc245f9fcea0a5f0c695a76954779aede0ff31a6940`; candidate object SHA-256: `ac5fdb9a95f6f6dfbcb0d4e4cec2fa39a1b4e26efb879b5af9e72e074420745d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
