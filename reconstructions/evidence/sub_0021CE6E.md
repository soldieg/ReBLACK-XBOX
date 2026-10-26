# sub_0021CE6E

- Function task: [#5370](https://github.com/soldieg/ReBLACK-XBOX/issues/5370).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021CE6E-0x0021CE88 inclusive, contiguous, 27 bytes; evidence `ev_cce419fdea7a5ecb02da11b830b898197a22c98eb634d36e8db9d2b550133942`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; limitations: none recorded.
- Target candidate: `sub_0021CE6E`, 27 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (27/27 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 27 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `cb10ff50c3b6eae4fc75d636c2e1afa1095017bbc86880a746a9337904d6a69c`; candidate object SHA-256: `427a20eb62b165603f8a877f9f95de30a28a649bdb9c3879ed6707bfa51c026f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
