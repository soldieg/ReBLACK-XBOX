# sub_001FF9F0

- Function task: [#3103](https://github.com/soldieg/ReBLACK-XBOX/issues/3103).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FF9F0â€“0x001FFB77 inclusive, contiguous, 392 bytes; evidence `ev_086e56b64e3b223d46c91ce76e010383911e879cb368b4a095f05d15c8763368`.
- Static Ghidra references: 0 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FF9F0`, 392 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (392/392 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 392 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `969abbc665475b03d540f9ef7478aae2557c2634e05b1bfb3c3fd33282a903d9`; candidate object SHA-256: `99acfb074c4a2861c201e24c786c4ecc2860729eca19b04e4e30b1ca1b0ce1ae`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
