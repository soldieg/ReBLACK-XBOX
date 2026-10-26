# sub_000AEFF0

- Function task: [#4973](https://github.com/soldieg/ReBLACK-XBOX/issues/4973).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x000AEFF0-0x000AEFFB inclusive, contiguous, 12 bytes; evidence `ev_0a41b7decc18989dbe10064204bb17aeb4be9aabf13796cd2fae10ff59f9d638`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_000AEFF0`, 12 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (12/12 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 12 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `b22d338804146759c49cba4324d41e94c926711f5f67b75f3b33f7e650f02588`; candidate object SHA-256: `48f1bfe89c6c838d5c49888b6159bfcf6a7a2b83ff0c31e9c0e66727dc009e39`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
