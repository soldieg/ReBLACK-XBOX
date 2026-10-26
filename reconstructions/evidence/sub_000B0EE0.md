# sub_000B0EE0

- Function task: [#4986](https://github.com/soldieg/ReBLACK-XBOX/issues/4986).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x000B0EE0-0x000B1052 inclusive, contiguous, 371 bytes; evidence `ev_569c35e384ae7b6f018c024905d1d9a743a491e0e27cbff870b7e89e9c721fec`.
- Static Ghidra references: 1 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_000B0EE0`, 371 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (371/371 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 371 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `862df18b0bec650703486943a988f385a9bbe27f617fd939d18fe4542223cf73`; candidate object SHA-256: `496207508bbdc7f3278be780ece5be6126b396d1683bb9445c1d24819b7d2695`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
