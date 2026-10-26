# sub_000DA4B0

- Function task: [#4337](https://github.com/soldieg/ReBLACK-XBOX/issues/4337).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DA4B0-0x000DA53D inclusive, contiguous, 142 bytes; evidence `ev_5a5525effdfa460c75f70471a57bcd33220af44029d7dd251c45054a4235af62`.
- Static Ghidra references: 3 caller sites, 8 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DA4B0`, 142 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (142/142 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 142 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d0699b891e11b404c8131ef58f66aa4897c8069d58678b5a544a41b4ed8081f3`; candidate object SHA-256: `3c4914884ab02c63f977435c5900214f3a5b90b8529067bfb4966d05c8269746`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
