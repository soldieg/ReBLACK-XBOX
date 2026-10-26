# sub_001CCDD0

- Function task: [#2902](https://github.com/soldieg/ReBLACK-XBOX/issues/2902).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CCDD0â€“0x001CCE6A inclusive, contiguous, 155 bytes; evidence `ev_4099eb7fa444a2b4c28e11ab6e0d23b6f23a3ede0fa3e030f4f6e4c647d44773`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CCDD0`, 155 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (155/155 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 155 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `aef8509f304a92f35060dffcc5daac6c6e1ab3357b34f7806f3683ab3d6d729a`; candidate object SHA-256: `38dd0509468746cc5f09eb865fe2ae2f33c4b7c4c982e6ceb4de0a15b8dde4e1`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
