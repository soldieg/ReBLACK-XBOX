# sub_000A5AA4

- Function task: [#4103](https://github.com/soldieg/ReBLACK-XBOX/issues/4103).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A5AA4-0x000A5AC8 inclusive, contiguous, 37 bytes; evidence `ev_24863447a393444d73354b069c2d93159c895f4ad2a47417f938e1684bb1a91f`.
- Static Ghidra references: 3 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A5AA4`, 37 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (37/37 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 37 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `cbe1b62561b4bd3e0094636314b8bb855d3963b834a8bb9d6588a544d5d7ca8e`; candidate object SHA-256: `2e1184ab29b04a7494bd7ead8831e24a21bc76b0d0ddd4a09c71f97d7a46f887`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
