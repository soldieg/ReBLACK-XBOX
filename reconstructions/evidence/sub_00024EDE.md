# sub_00024EDE

- Function task: [#4684](https://github.com/soldieg/ReBLACK-XBOX/issues/4684).
- Batch: 45 (current 100-lot run: 45/100; 100 functions).
- Ghidra 12.1.3 body: 0x00024EDE-0x00024FB5 inclusive, contiguous, 216 bytes; evidence `ev_369e05890cc15edf7cd834c0df6837d97c665a9e0f8a5f657432e5ed28915d9a`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; 4 indirect call instructions and 0 incoming sites without a caller owner remain unresolved. Direct call edges were checked against disassembly; complete caller/callee coverage is not claimed.
- Target candidate: `sub_00024EDE`, 216 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (216/216 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 216 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `dc193683832c43b4dea8f1250a38eacf2d15499685c26d7ac201dc4579fc0df5`; candidate object SHA-256: `7961c1a992b6b66d681d30794dc729bae3c75164572b8c7f6e1c1355e35ea52c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
