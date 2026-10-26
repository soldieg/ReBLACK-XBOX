# sub_0004FAC0

- Function task: [#4856](https://github.com/soldieg/ReBLACK-XBOX/issues/4856).
- Batch: 46 (current 100-lot run: 46/100; 100 functions).
- Ghidra 12.1.3 body: 0x0004FAC0-0x0004FAFF inclusive, contiguous, 64 bytes; evidence `ev_6586bf2cc792ec812cad1983c42391504d614a8d7f5d8269a631d603e5a65207`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; 1 indirect call instructions and 0 incoming sites without a caller owner remain unresolved. Direct call edges were checked against disassembly; complete caller/callee coverage is not claimed.
- Target candidate: `sub_0004FAC0`, 64 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (64/64 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 64 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `50bec243583537611b74cfefae8397f25f4904a9e6d489454660cbd252beb5c3`; candidate object SHA-256: `b1f39b3570c60618061bf4d8889c80f3c01a2208fd98515256334dd1f5055cd0`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
