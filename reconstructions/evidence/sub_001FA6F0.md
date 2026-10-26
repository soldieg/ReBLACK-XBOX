# sub_001FA6F0

- Function task: [#5351](https://github.com/soldieg/ReBLACK-XBOX/issues/5351).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001FA6F0-0x001FAA5A inclusive, contiguous, 875 bytes; evidence `ev_376ccf1852aadbca6a9c37b0f25be684d8f16ef5a627874844eecef7dc628dc6`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001FA6F0`, 875 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (875/875 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 875 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6b460dbd680fb047321c68958cb70a6ae5e4a8122ee8bf23b2794b8cc8d86d55`; candidate object SHA-256: `e2b13025451b89e33a5c18b4d2bb63acc423eb35bf9b3d867b3125ed5606957e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
