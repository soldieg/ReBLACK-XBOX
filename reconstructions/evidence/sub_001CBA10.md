# sub_001CBA10

- Function task: [#2892](https://github.com/soldieg/ReBLACK-XBOX/issues/2892).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CBA10â€“0x001CBABC inclusive, contiguous, 173 bytes; evidence `ev_cdd43f4084745a6563d59ecb7503eb294a9858848502f68e0e9ec71cb47c5664`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CBA10`, 173 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (173/173 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 173 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e75d8699fa4f5374ba491527ad99540d1bfb979adcd1b3b2f94bbff83d9ce3f9`; candidate object SHA-256: `395b985c8ec2937cbd6ea5036e711c33b648709840bae7042f647ef3d65bac48`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
