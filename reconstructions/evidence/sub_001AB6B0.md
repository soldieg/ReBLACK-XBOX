# sub_001AB6B0

- Function task: [#2728](https://github.com/soldieg/ReBLACK-XBOX/issues/2728).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AB6B0–0x001AB704 inclusive, contiguous, 85 bytes; evidence `ev_adce261c258718492f804c3b678f857a4b06c087a73c25689d453065f0889f81`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AB6B0`, 85 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (85/85 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 85 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f9ef1359673bd033cd898d7b05a4edd342a430480cf3567df0e751a68cb30ec1`; candidate object SHA-256: `9d92697a47a2076c31fa32bca1a42edb5b04ebabf98dc0da9df0eaf28805f1a8`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
