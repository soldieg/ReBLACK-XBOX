# sub_001CAA50

- Function task: [#2881](https://github.com/soldieg/ReBLACK-XBOX/issues/2881).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CAA50â€“0x001CACD2 inclusive, contiguous, 643 bytes; evidence `ev_feb839c598ca001650c2ca20fa9e9bcdb17931e4f21e487dd5004433f2b6e05c`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CAA50`, 643 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (643/643 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 643 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c00fb519a7b546cc2ec65a3acd60966932f07023854a33c0e1128d2946da4ae0`; candidate object SHA-256: `2def9eb051ff5d1bdeb5872cfd6780126a73acbf22b77b34285ac881530962f2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
