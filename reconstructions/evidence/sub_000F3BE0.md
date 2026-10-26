# sub_000F3BE0

- Function task: [#5029](https://github.com/soldieg/ReBLACK-XBOX/issues/5029).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x000F3BE0-0x000F3CE5 inclusive, contiguous, 262 bytes; evidence `ev_918e57610d684a6d91c887cc5e9f5d8ef1c91d27a7168f6df1c41c47a86a6a95`.
- Static Ghidra references: 1 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; limitations: Ghidra's caller inventory omits sources of 1 call reference(s) into this function's body..
- Target candidate: `sub_000F3BE0`, 262 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (262/262 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 262 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e58e277bf5cac7a1a7b99edb2c22a38e3f7ef5ab47efd3e69ee6d9536e50cb3c`; candidate object SHA-256: `b5f56894d0775997fb1707d4b04b8fa024d2208b4e6436be862e1a3953b5adf2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
