# sub_0018ACA0

- Function task: [#2563](https://github.com/soldieg/ReBLACK-XBOX/issues/2563).
- Batch: 24 (current ten-batch run: 2/10; 100 functions).
- Ghidra 12.1.3 body: 0x0018ACA0–0x0018AD03 inclusive, contiguous, 100 bytes; evidence `ev_a0aa1b9f569a4314cbe666650a218788e8522b2e8faee4e69f6cb39ce6dbb439`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0018ACA0`, 100 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (100/100 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 100 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e15f40ccf880446aca8ea1c05ef241be8341c3f992c843788e85fed4d02546fa`; candidate object SHA-256: `5b52796a855bc3553a22bb4895db66665a1de074d1872d8e36b9fb7b795f6711`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
