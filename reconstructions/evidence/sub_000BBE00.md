# sub_000BBE00

- Function task: [#4186](https://github.com/soldieg/ReBLACK-XBOX/issues/4186).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000BBE00-0x000BBE36 inclusive, contiguous, 55 bytes; evidence `ev_eaa0f0c193dca235bf63f8023de953f6eb2fd9300c1ec5fab5ce46c0d1bc78c5`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000BBE00`, 55 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (55/55 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 55 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d94a155d029c435e3f288699c9346f46226a75675b6199992a1bf49dc7e21be4`; candidate object SHA-256: `05a3144b26af8774e048e8c0529d9482165d74a114db2f626da76b9d1c4248a4`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
