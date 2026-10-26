# sub_0021FB2A

- Function task: [#5432](https://github.com/soldieg/ReBLACK-XBOX/issues/5432).
- Batch: 52 (current 100-lot run: 52/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021FB2A-0x0021FC30 inclusive, contiguous, 263 bytes; evidence `ev_2130400be549c481ec9920ad81d022e853f234c59f67fbc7c91de5ed3e7f1aba`.
- Static Ghidra references: 2 caller sites, 7 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021FB2A`, 263 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (263/263 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 263 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `aef0c05bfa78b3e2317ed4b45ffa854e916551741595a989ab281cd7cc9bc10e`; candidate object SHA-256: `e3fb167f48f9a687633843af5348cffd75d513994c4471d817e9ba4975591954`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
