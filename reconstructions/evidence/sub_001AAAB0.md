# sub_001AAAB0

- Function task: [#2716](https://github.com/soldieg/ReBLACK-XBOX/issues/2716).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AAAB0–0x001AAAE1 inclusive, contiguous, 50 bytes; evidence `ev_a42dd826857263d6fccd789f0e28bd129079260b4c29d4939115a34106005543`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AAAB0`, 50 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (50/50 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 50 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ee5298932841c5daf646120fd07a949df1848140a105dd6a3dfaa9a77340a334`; candidate object SHA-256: `1e5fdb973ce0a0d1eded96dee842697f500eb1f66bb908a2d3088fffc54e643b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
