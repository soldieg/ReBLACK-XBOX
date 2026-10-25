# sub_0021C0FB

- Function task: [#4477](https://github.com/soldieg/ReBLACK-XBOX/issues/4477).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021C0FB-0x0021C121 inclusive, contiguous, 39 bytes; evidence `ev_b07ae041a948df57f122279a376ecf5dd812c23e86cb545eaa08f5fd18704d6e`.
- Static Ghidra references: 2 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021C0FB`, 39 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (39/39 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 39 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `b7cced9a17bc62edaf6624ce4047780863d4ba12969821348e537305d8d5880a`; candidate object SHA-256: `402a6aac0aab0735b84528356df7dbbfde932365828196a4d8d17a0b8be8e885`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
