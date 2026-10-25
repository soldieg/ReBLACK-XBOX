# sub_00026FEF

- Function task: [#3688](https://github.com/soldieg/ReBLACK-XBOX/issues/3688).
- Batch: 36 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x00026FEF-0x0002700B inclusive, contiguous, 29 bytes; evidence `ev_65676d1f33b14d7f007f20114e3cd0c280d3e4c6ea32e412cd569b80e3a51bb3`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_00026FEF`, 29 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (29/29 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 29 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `b7c870eeb9e520d7b9fb4a4d884132f3d0a485d48ed8d7343e951e1f6804456b`; candidate object SHA-256: `53a116cb9f1730135ff9bb5e769e85d64eb4f84dd05cd7d197e20c9afaeeafcb`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
