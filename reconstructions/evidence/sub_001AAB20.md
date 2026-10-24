# sub_001AAB20

- Function task: [#2718](https://github.com/soldieg/ReBLACK-XBOX/issues/2718).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AAB20–0x001AAB5A inclusive, contiguous, 59 bytes; evidence `ev_f15901126698ed8173c357c9f8fa12f248892a5955edb3c3622dc380148edf66`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AAB20`, 59 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (59/59 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 59 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0dfc17be8c336f785fd5ff3daa31e7de96e13427e1b48986bb28311892401ca7`; candidate object SHA-256: `603bfb39828c2429c87f7ed34d51555f9b38ec009307190eb2fb609119a92ac9`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
