# sub_000AA18A

- Function task: [#4958](https://github.com/soldieg/ReBLACK-XBOX/issues/4958).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x000AA18A-0x000AA2A1 inclusive, contiguous, 280 bytes; evidence `ev_9950fb6c684a5af91a289417cea7c4c6206cb9a81ef491bee543c3e7512c8552`.
- Static Ghidra references: 0 caller sites, 7 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_000AA18A`, 280 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (280/280 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 280 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `09a8193962645ad87ad42c378767e69fe88959011e063ee3e0f0653c3a8d2146`; candidate object SHA-256: `79b946fc5b154fe7a1d7f8e3207f66ced4fc1bd73da2f942cf3c9f8713fb0178`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
