# sub_0026DDB0

- Function task: [#3415](https://github.com/soldieg/ReBLACK-XBOX/issues/3415).
- Batch: 31 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x0026DDB0â€“0x0026DE4D inclusive, contiguous, 158 bytes; evidence `ev_5da05975299e8de655d535f7f6bfdcdddc101e1177983868b6493ae3a9325004`.
- Static Ghidra references: 1 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0026DDB0`, 158 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (158/158 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 158 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `32583ecf02d341932dcfb23ad9070b141a41eedd9bafc3b70118a9f616a92394`; candidate object SHA-256: `c2076f67f44effcd3fcdb5483adc55b032c804d04b782e9c55f413755a449447`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
