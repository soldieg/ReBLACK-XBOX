# sub_0021DF1E

- Function task: [#5394](https://github.com/soldieg/ReBLACK-XBOX/issues/5394).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021DF1E-0x0021DF94 inclusive, contiguous, 119 bytes; evidence `ev_a88dac374b92cd303703f818cf943d5f3e63bfba2b7f3c01bca06dd91a7d8d0d`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021DF1E`, 119 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (119/119 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 119 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a183e71167d0deb5bce3694e8177efec2906ac1c457e59b1c493d44b21395b4e`; candidate object SHA-256: `63c10601e31684b55539b81bb91b096333f97173562f294b80ddd5975b746a24`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
