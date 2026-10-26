# sub_000AFD30

- Function task: [#4979](https://github.com/soldieg/ReBLACK-XBOX/issues/4979).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x000AFD30-0x000AFE50 inclusive, contiguous, 289 bytes; evidence `ev_c95f6b7b305b82a2770684ef8ffb9fb72a18296ce0f734f085a5e823f191d366`.
- Static Ghidra references: 1 caller sites, 8 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_000AFD30`, 289 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (289/289 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 289 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a3c3b20f021ebea49e223f544b84db62dfd4754e21f36fc08f37151eecbb8720`; candidate object SHA-256: `270cde2d8b33a0e83b87e0b025d8e90996fc1f662f495fc4b698b7ecdc5f5649`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
