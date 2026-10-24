# sub_001AB2F0

- Function task: [#2724](https://github.com/soldieg/ReBLACK-XBOX/issues/2724).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AB2F0–0x001AB37A inclusive, contiguous, 139 bytes; evidence `ev_1964db12b57d40749ed2ff9668555541a15adab683c8579cb29d0e13c3c074c8`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AB2F0`, 139 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (139/139 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 139 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d579cdf56888ffd459aec1e0795ce359ba691b7440856fd9fd7e7647cb1858a8`; candidate object SHA-256: `a435f9bc98749795165cdb7e5c121573ca38d6c8e23feb635017d716787ce7c2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
