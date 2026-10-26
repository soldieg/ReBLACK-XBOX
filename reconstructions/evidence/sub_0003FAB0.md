# sub_0003FAB0

- Function task: [#3724](https://github.com/soldieg/ReBLACK-XBOX/issues/3724).
- Batch: 36 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x0003FAB0-0x0003FB25 inclusive, contiguous, 118 bytes; evidence `ev_bd3121c214040ee40235b589fa00ed27f30d176619854a456fa9e2a1ae28fe59`.
- Static Ghidra references: 5 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0003FAB0`, 118 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (118/118 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 118 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `564b4074debe3bb662d66635df7b06b3c65737e32ee4cc1b3f8c2074c1a3cec4`; candidate object SHA-256: `7a9d130db01fcd5626eb6d8d0f8f78016ef5842932a672ff590ce6c7b08b643c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
