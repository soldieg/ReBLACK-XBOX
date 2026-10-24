# sub_0021B2FB

- Function task: [#3271](https://github.com/soldieg/ReBLACK-XBOX/issues/3271).
- Batch: 31 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x0021B2FBâ€“0x0021B32F inclusive, contiguous, 53 bytes; evidence `ev_ab7921539524722b34c3eecb0183c4848efb5a8400a6c258ab74eeb0c2718794`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021B2FB`, 53 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (53/53 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 53 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2f0ccae4acf87561795d9919dddbf2ced7aa0563a08ca702a75401be26c098cd`; candidate object SHA-256: `fe19a4a7e70e300d6af7971e7c8ad24bf20849010e7a1bb38db5da42087648eb`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
