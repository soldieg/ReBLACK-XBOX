# sub_000B3ED0

- Function task: [#4999](https://github.com/soldieg/ReBLACK-XBOX/issues/4999).
- Batch: 47 (current 100-lot run: 47/100; 100 functions).
- Ghidra 12.1.3 body: 0x000B3ED0-0x000B403D inclusive, contiguous, 366 bytes; evidence `ev_cb71f13b691d5a337dfc5c9c0c63038a755b84e7074b2695054b5e19f3bb5223`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage metadata was not retained in this export. Resolved caller/callee counts are listed above; complete caller/callee coverage is not claimed.
- Target candidate: `sub_000B3ED0`, 366 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (366/366 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 366 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `338ccc33e483e94022d398ddc4cc8aa537fcdef9d491a42648619f0ee653ceda`; candidate object SHA-256: `747948936f9743d3b9ded3a361e012833d188d570fe3d9ecb9a334c151d08382`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
