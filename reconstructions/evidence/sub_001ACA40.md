# sub_001ACA40

- Function task: [#2741](https://github.com/soldieg/ReBLACK-XBOX/issues/2741).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001ACA40–0x001ACAAC inclusive, contiguous, 109 bytes; evidence `ev_cadc003e690256dd842022f8f228a4fac4a0b04d7e50ff0d50f4e18ad0a45c35`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001ACA40`, 109 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (109/109 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 109 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `de5a87ed5131ebb974a90c8868a9898b5a68937f579b9e2068a22d982d5dcf83`; candidate object SHA-256: `f762f9eddd03aef7303aa8f9d5ffd8b0882df1444bdb5b8d5ed9dd750df7afca`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
