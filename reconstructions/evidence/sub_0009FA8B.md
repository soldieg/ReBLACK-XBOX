# sub_0009FA8B

- Function task: [#4042](https://github.com/soldieg/ReBLACK-XBOX/issues/4042).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009FA8B-0x0009FCE5 inclusive, contiguous, 603 bytes; evidence `ev_4549c32d9248348c21c7bf34c157a1bd7df072d7c306fa7c9593b15a64f2b2f3`.
- Static Ghidra references: 1 caller sites, 7 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009FA8B`, 603 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (603/603 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 603 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `15f855c86ed204a9c13bdcbdefa3ad004f122b97f8768af2ec76910c3548edd9`; candidate object SHA-256: `a955041df2ef36c46b4b0c7b38bfe66847df7fefd6939dc15184f57abcb36d74`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
