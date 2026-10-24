# sub_001ACCE0

- Function task: [#2742](https://github.com/soldieg/ReBLACK-XBOX/issues/2742).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001ACCE0–0x001ACE38 inclusive, contiguous, 345 bytes; evidence `ev_b0d74d123b3c7790810bc63e76f1972636990ce9701db11e53222538a7d3932f`.
- Static Ghidra references: 2 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001ACCE0`, 345 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (345/345 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 345 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4422ea39b668c433c6bf94ffe8dcd73941eb0c810bde2d10f13f0d92a7afedcd`; candidate object SHA-256: `b0a3e8ff433369a8e3a94357968468c5b1354c750524a73c9a52e187e406a2e9`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
