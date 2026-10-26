# sub_0021DAA4

- Function task: [#5389](https://github.com/soldieg/ReBLACK-XBOX/issues/5389).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021DAA4-0x0021DB87 inclusive, contiguous, 228 bytes; evidence `ev_d1eac141bd6168eefb7136c8b198068938e2d09c62b27debcc2b240c28e10b13`.
- Static Ghidra references: 3 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021DAA4`, 228 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (228/228 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 228 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `669103567b65ff3502628de3b772b0f19a401220961efdcbafc8cdf2dc1b0c2b`; candidate object SHA-256: `0745d62063434a9b34916bcaa1f5ae643c0bb6832732a57b8d1057174235d5b8`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
