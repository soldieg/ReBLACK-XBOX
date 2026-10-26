# sub_000D9AF0

- Function task: [#4328](https://github.com/soldieg/ReBLACK-XBOX/issues/4328).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000D9AF0-0x000D9B48 inclusive, contiguous, 89 bytes; evidence `ev_0a202c10ff2be4e308944ca011e89724694f14f55190cc4f9a9cac371d92f12d`.
- Static Ghidra references: 9 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000D9AF0`, 89 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (89/89 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 89 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c5698600859628fca14db649a8f131f918697d7cdccaa621d5b27a7f8b555282`; candidate object SHA-256: `592157ccd2ff107702665208c189b024c793944ff1790d06849bc7d43bede7fe`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
