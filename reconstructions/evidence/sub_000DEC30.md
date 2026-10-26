# sub_000DEC30

- Function task: [#4360](https://github.com/soldieg/ReBLACK-XBOX/issues/4360).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DEC30-0x000DEC5C inclusive, contiguous, 45 bytes; evidence `ev_57b341debd99806f35d0fa37085e5640369513f89da7862d26a09c4c8f690fcf`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DEC30`, 45 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (45/45 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 45 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c280930209e42bfccd84169ab412a665ca6d99c8f42a618413fe25fe9202d925`; candidate object SHA-256: `ae4bf26515a0998c29cb9f64017ffd0663066c6054070a18caecf47de68a6572`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
