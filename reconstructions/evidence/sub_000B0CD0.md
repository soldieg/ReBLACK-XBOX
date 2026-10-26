# sub_000B0CD0

- Function task: [#4985](https://github.com/soldieg/ReBLACK-XBOX/issues/4985).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x000B0CD0-0x000B0ED6 inclusive, contiguous, 519 bytes; evidence `ev_607f394ee690dd2ee1e4248b9c2222474f4ec6f28013044640f42b358bc210ec`.
- Static Ghidra references: 1 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_000B0CD0`, 519 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (519/519 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 519 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3c96dfa6fa7a0bd0a1c15d961b4ca36ed0107d43aa1b758f1d75ebabff965260`; candidate object SHA-256: `e40078c98112ec964854507b0d38120f58c1f1b3007547795ace3c3590cc16f5`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
