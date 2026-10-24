# sub_001FF8F0

- Function task: [#3102](https://github.com/soldieg/ReBLACK-XBOX/issues/3102).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FF8F0â€“0x001FF9E5 inclusive, contiguous, 246 bytes; evidence `ev_8deac8d5a77eb4cd89a89d29a00047a80b8c3f7e975859c4d49baf6e028328f0`.
- Static Ghidra references: 0 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FF8F0`, 246 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (246/246 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 246 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `5e67bf4d481055f99f3a2b253a6f5c7c6ba50faade5afef5af2439f0b37150ad`; candidate object SHA-256: `66c27e043ce022cfb29fa73a2a964169cd73109613e469d850c6285c05bc5ef5`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
