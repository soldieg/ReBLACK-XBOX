# sub_001CC1A0

- Function task: [#2895](https://github.com/soldieg/ReBLACK-XBOX/issues/2895).
- Batch: 28 (current ten-batch run: 6/10; 100 functions).
- Ghidra 12.1.3 body: 0x001CC1A0â€“0x001CC34D inclusive, contiguous, 430 bytes; evidence `ev_e5f0a1dcf0721a2cb1c682d4364dc466170586a0daafd74543c10d944881e697`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001CC1A0`, 430 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (430/430 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 430 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3848ffae95170b8ca29e3a2a650e4ed57579003d2265b93a736795dafb416f07`; candidate object SHA-256: `8ec056eeeb7eac6dccb5ff917f28f63cf186fbba65ddfbf1402accab1d00f0f2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
