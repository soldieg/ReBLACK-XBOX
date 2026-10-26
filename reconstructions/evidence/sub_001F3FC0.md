# sub_001F3FC0

- Function task: [#3011](https://github.com/soldieg/ReBLACK-XBOX/issues/3011).
- Batch: 29 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x001F3FC0â€“0x001F4028 inclusive, contiguous, 105 bytes; evidence `ev_8689c012df3fe7092df0437e71c8efdcad29606dc03f008190c56530b91e3e19`.
- Static Ghidra references: 70 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001F3FC0`, 105 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (105/105 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 105 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `43773f928d837ead9c11cff84b24a1685ed66eceed6cddcfe8b135ca1d772cec`; candidate object SHA-256: `6e0ad9ffcb75ed192e0fd645df6bc52ee47bfd4ab07812ff3570630d87486a4f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
