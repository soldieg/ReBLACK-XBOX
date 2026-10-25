# sub_000DC3A0

- Function task: [#4356](https://github.com/soldieg/ReBLACK-XBOX/issues/4356).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DC3A0-0x000DC46F inclusive, contiguous, 208 bytes; evidence `ev_ac537f20d1352269fad615687318f6a12e813ab64229f6f879234164c01cf442`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DC3A0`, 208 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (208/208 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 208 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `db83b338620d4c5d60b379207a2fe3bcfec5f6874e7735e57d5fdae1c0a3c81b`; candidate object SHA-256: `f3f1f589beac31910215e090e9bc16d1feb85d08f26a332f155210f23cc96419`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
