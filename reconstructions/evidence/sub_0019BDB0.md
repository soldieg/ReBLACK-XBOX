# sub_0019BDB0

- Function task: [#5067](https://github.com/soldieg/ReBLACK-XBOX/issues/5067).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x0019BDB0-0x0019BE85 inclusive, contiguous, 214 bytes; evidence `ev_3bc4e2996dde946af62192eb72185e3ce42560219bc892f34791dbb511f48f45`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0019BDB0`, 214 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (214/214 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 214 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `062c09f2b267c694dd295ddd31a35e01131f433df402c1094c495cece0bcb4e4`; candidate object SHA-256: `6546ae90e900408a70f3abbf952e4a2dfdd564ef6863ca6d910cd11d2bea5f20`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
