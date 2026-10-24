# sub_001FE9A0

- Function task: [#3097](https://github.com/soldieg/ReBLACK-XBOX/issues/3097).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FE9A0â€“0x001FEF51 inclusive, contiguous, 1458 bytes; evidence `ev_bcca9aa01ab12393fb2014683d6608f210f6614f77146cebd620cf2da81b3dab`.
- Static Ghidra references: 1 caller sites, 17 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FE9A0`, 1458 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1458/1458 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1458 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `790390600aa7be4884c5ffe8e6a2a90b10848d7412ead687bebbb6a90d48dcd6`; candidate object SHA-256: `364b251bf62c88ba0c8604914cc757280c898552c0079984eebf76b618bef964`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
