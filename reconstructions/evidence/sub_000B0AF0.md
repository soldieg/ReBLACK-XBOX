# sub_000B0AF0

- Function task: [#4984](https://github.com/soldieg/ReBLACK-XBOX/issues/4984).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x000B0AF0-0x000B0C04 inclusive, contiguous, 277 bytes; evidence `ev_d87e5d8b9bdd096aeb864eb59f325bce33b52c462243068a2aeb7703a0cdb947`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_000B0AF0`, 277 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (277/277 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 277 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `59e6180acab0d0c9cfcf328fd06de98bd5a03c14f9fa16515e71d1ed7f364183`; candidate object SHA-256: `d43a90c13cb447b909e83949122550d2cd7b5f291e3e0f20e1d7f15dc9ae2335`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
