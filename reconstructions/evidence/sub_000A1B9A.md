# sub_000A1B9A

- Function task: [#4062](https://github.com/soldieg/ReBLACK-XBOX/issues/4062).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A1B9A-0x000A1C19 inclusive, contiguous, 128 bytes; evidence `ev_b219dc6b93b5eb69770e8c3924f904142b618c0a7e01162c4a15ca7ffe82e5ec`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A1B9A`, 128 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (128/128 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 128 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `14d76a42ee2f28e6797a0198ef58e5f7c3d3df12ddd29588c494b8da435d8fa8`; candidate object SHA-256: `dc7f77aecb17ff72e793cff251b9329792ba779f537552221a275c902889bf63`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
