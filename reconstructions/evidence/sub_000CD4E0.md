# sub_000CD4E0

- Function task: [#4259](https://github.com/soldieg/ReBLACK-XBOX/issues/4259).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CD4E0-0x000CD72F inclusive, contiguous, 592 bytes; evidence `ev_d747b71becc2531e3cc1d3c0832c0212a539832b1eff9f306b57b4144404b1c7`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CD4E0`, 592 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (592/592 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 592 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e6c7f65e15ee28d2eac65047ff4c42151df8d5fa591c0613a96e6d2150feaca8`; candidate object SHA-256: `b9f8d9950f37fcd61d8a03c636c6a1167172e5d4291c6beac1795e53c131115d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
