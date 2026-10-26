# sub_001F3EE0

- Function task: [#3008](https://github.com/soldieg/ReBLACK-XBOX/issues/3008).
- Batch: 29 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x001F3EE0â€“0x001F3F69 inclusive, contiguous, 138 bytes; evidence `ev_fcbaed19d3bb37c367d11a64a2a15438c710315906fbb499ca8c62ce339e5750`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001F3EE0`, 138 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (138/138 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 138 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `524ff6b04094d2707b309b58c1d57f0c1c8b92183f9fcc1d1c24dc64631d16ad`; candidate object SHA-256: `a2d608eea3f0853c602b38a259bedc49c8351165f89651eb66fa2b6b10776055`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
