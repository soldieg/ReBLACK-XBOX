# sub_0019FCD0

- Function task: [#5109](https://github.com/soldieg/ReBLACK-XBOX/issues/5109).
- Batch: 49 (current 100-lot run: 49/100; 100 functions).
- Ghidra 12.1.3 body: 0x0019FCD0-0x0019FD7F inclusive, contiguous, 176 bytes; evidence `ev_240a7e50e0d524493453199ef5ef0fdefaf0507ed02412c08241607d6f140b88`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0019FCD0`, 176 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (176/176 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 176 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e23c373bffa74f7158b194cc1fb60e344249f53c554763b72ab42d6a0c80d735`; candidate object SHA-256: `9e9e80e2826fad05b9a1159ec763f7fe0e4ad3682be76cc525f6eb36718763a3`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
