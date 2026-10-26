# sub_0022AAE3

- Function task: [#5586](https://github.com/soldieg/ReBLACK-XBOX/issues/5586).
- Batch: 53 (current 100-lot run: 53/100; 100 functions).
- Ghidra 12.1.3 body: 0x0022AAE3-0x0022AC84 inclusive, contiguous, 418 bytes; evidence `ev_33ca2ab7fcfca06760853a935cdfc5ab766ba4fc65e5e0d1b60a33b088d3ab15`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0022AAE3`, 418 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (418/418 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 418 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8df28c33c1bf2440f90095649060d0e1f32b147da38d5b8f234273d7b4e8e084`; candidate object SHA-256: `bf1d9d6c3e5b5305608bd98725a2600bf71d2e1287b26a98ce98d8f0cac5ac10`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
