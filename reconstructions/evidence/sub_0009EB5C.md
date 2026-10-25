# sub_0009EB5C

- Function task: [#4034](https://github.com/soldieg/ReBLACK-XBOX/issues/4034).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009EB5C-0x0009EBFC inclusive, contiguous, 161 bytes; evidence `ev_64d9a14b107525da7bc0f3c589db33db00a45328d310e2895a9785ce4f9f29a2`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009EB5C`, 161 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (161/161 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 161 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a53e43eb190a5f50245f4e1d52cde94ac9fb5aeac3b88ed6bb3a18f0a797f5cb`; candidate object SHA-256: `4b626f81746b7e7a106493c74eed0fc5e1e7bf8b2c39387b21acb73f4acf57a3`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
