# sub_0019FEA0

- Function task: [#5110](https://github.com/soldieg/ReBLACK-XBOX/issues/5110).
- Batch: 49 (current 100-lot run: 49/100; 100 functions).
- Ghidra 12.1.3 body: 0x0019FEA0-0x001A004F inclusive, contiguous, 432 bytes; evidence `ev_c960b566f5005e1412af6b6e7a35c898c764c53583097ef9d4e162bde0796f8f`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0019FEA0`, 432 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (432/432 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 432 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9537d9f8db53744ecbbb22082fb7f467d2c3324cbc33bec9bd8c09711bc1f1df`; candidate object SHA-256: `8c4d80f740177266970567c76b86a307ffe7279ca54f4995745a788849766755`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
