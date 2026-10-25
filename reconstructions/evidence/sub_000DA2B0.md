# sub_000DA2B0

- Function task: [#4335](https://github.com/soldieg/ReBLACK-XBOX/issues/4335).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DA2B0-0x000DA39E inclusive, contiguous, 239 bytes; evidence `ev_486a5bb1cb74f0935babff699d1f2ab4dd342eee001d5ad7acf32304b43f8360`.
- Static Ghidra references: 2 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DA2B0`, 239 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (239/239 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 239 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ca2742dde1c224d3b668ca4595c4c77cf0085815ea121cc3041c0b6678dff77d`; candidate object SHA-256: `787ada64a90b307103e4d2b4aae30cbdc87e64118028873987129075f7014b0a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
