# sub_001BC6E0

- Function task: [#2794](https://github.com/soldieg/ReBLACK-XBOX/issues/2794).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001BC6E0–0x001BD152 inclusive, contiguous, 2675 bytes; evidence `ev_7b994220c5639f98440fe6f011cdf0523a9ce5c4e41b95905d56d22ea93aee2d`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001BC6E0`, 2675 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (2675/2675 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 2675 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d867c6ddf3f69d6d589c2b9a485c8af97cd7d0aa488d7f056568e01646144d9f`; candidate object SHA-256: `e162a20f269b97161c8cb6a7cbe879cb24f03ed083c012f4355269d517cf4376`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
