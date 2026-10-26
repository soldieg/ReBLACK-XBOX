# sub_000A9C5E

- Function task: [#4144](https://github.com/soldieg/ReBLACK-XBOX/issues/4144).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000A9C5E-0x000A9D3A inclusive, contiguous, 221 bytes; evidence `ev_4e4d007ddb657afb638b4c037526f4a822afb04ff33f8a725b1b7b536d1ca4bc`.
- Static Ghidra references: 2 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000A9C5E`, 221 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (221/221 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 221 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `dcf12ec6cf1de4c6a92f9996c41b71788face5ab45681ed99130f8ea4c8b579b`; candidate object SHA-256: `9f370abec4fe4d21e3c875e3f2efedf09d3ba477d781198fce132da5c9ccafdf`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
