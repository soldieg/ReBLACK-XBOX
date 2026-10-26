# sub_0022DAD4

- Function task: [#5603](https://github.com/soldieg/ReBLACK-XBOX/issues/5603).
- Batch: 53 (current 100-lot run: 53/100; 100 functions).
- Ghidra 12.1.3 body: 0x0022DAD4-0x0022DB50 inclusive, contiguous, 125 bytes; evidence `ev_acbb9231f7f260253003d7061e643a810fba9cee67f2bb767f468141b5da9838`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0022DAD4`, 125 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (125/125 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 125 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `1dfb5f95add4a0a7377a57bb99b7abe9a6531a2daaead14f1f89ea9cc7a5a0dc`; candidate object SHA-256: `443111598b8d9f8f1886d4c0f7889e68f6d67c4248a200421062abd9f4445c9b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
