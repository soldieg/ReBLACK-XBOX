# sub_001AAF50

- Function task: [#2722](https://github.com/soldieg/ReBLACK-XBOX/issues/2722).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AAF50–0x001AAF81 inclusive, contiguous, 50 bytes; evidence `ev_1149577863a31c0f8e831db53e2a6029ceb7184cbc8865b29807700e872d58e0`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AAF50`, 50 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (50/50 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 50 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `1c263c0d5267eff0ef4351a976860d971b97ec857c63b1f6d2dcae9d218b5ede`; candidate object SHA-256: `b5b3c9ab10339fc3d73df97b51723f2a2791a465c1a9e75d3f47296b635b22d3`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
