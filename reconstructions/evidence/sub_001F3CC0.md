# sub_001F3CC0

- Function task: [#3007](https://github.com/soldieg/ReBLACK-XBOX/issues/3007).
- Batch: 29 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x001F3CC0â€“0x001F3CF2 inclusive, contiguous, 51 bytes; evidence `ev_d5e44ccd63d45da188adc7c63c7fd01b606dad1c7155530c7843ebbd1ba3bb58`.
- Static Ghidra references: 7 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001F3CC0`, 51 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (51/51 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 51 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d14e26c4e071baec37a3da363e2a0bcb187ef171f14106cb0fbf3ec7cacc61a3`; candidate object SHA-256: `e03d4ab6e35667fedfc5d7728fa03641bb5d2486c23d45d7de95b8767e7d47a0`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
