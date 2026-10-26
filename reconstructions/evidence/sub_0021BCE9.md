# sub_0021BCE9

- Function task: [#4470](https://github.com/soldieg/ReBLACK-XBOX/issues/4470).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021BCE9-0x0021BD9F inclusive, contiguous, 183 bytes; evidence `ev_d3100478b68b4986fadf8451655aa4f5f97041a509aeeecf4a2341c463d40903`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021BCE9`, 183 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (183/183 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 183 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e9e9cc845c83590d2855d6fb872dddd9a8e8f034547135715a79f9735a9a831c`; candidate object SHA-256: `55958052756c3f094888ee7491ae8127df2c4e38f4ed9e42315ddb39b284dd9e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
