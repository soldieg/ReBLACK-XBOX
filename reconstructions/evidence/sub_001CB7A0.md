# sub_001CB7A0

- Function task: [#2891](https://github.com/soldieg/ReBLACK-XBOX/issues/2891).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CB7A0â€“0x001CBA08 inclusive, contiguous, 617 bytes; evidence `ev_122b2a4a2d0c24d451cb06dd6b7535fb790fa48d6a080acb28b4fb879d461964`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CB7A0`, 617 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (617/617 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 617 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `87806bf2158b992611e866466c31d7812836e417817f8085ac859f75f279b85e`; candidate object SHA-256: `2c9e90cdab5b7411f63493c7ca09e48fc53464794f5eaf31ebb3a83f9d173967`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
