# sub_000B7CD0

- Function task: [#5017](https://github.com/soldieg/ReBLACK-XBOX/issues/5017).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x000B7CD0-0x000B7CF6 inclusive, contiguous, 39 bytes; evidence `ev_81c90c399a65a6554d3138bcc736334c8daf9b14ff3c7e19906a2724e32c36b4`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_000B7CD0`, 39 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (39/39 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 39 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `78208da1778ea8f572550a94dda1ab99081fe58c6dc29bb4c1457e863302677a`; candidate object SHA-256: `0a7ef2f3a33a40f83d7bd00060a57b6fc132117a31335123b9155193b632a2af`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
