# sub_0002FBE0

- Function task: [#4734](https://github.com/soldieg/ReBLACK-XBOX/issues/4734).
- Batch: 45 (current 100-lot run: 45/100; 100 functions).
- Ghidra 12.1.3 body: 0x0002FBE0-0x0002FBFB inclusive, contiguous, 28 bytes; evidence `ev_b66457383ebcc8d49037575820b415451f232ee09363a2f6a63eee8d8350694f`.
- Static Ghidra references: 4 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; 0 indirect call instructions and 1 incoming sites without a caller owner remain unresolved. Direct call edges were checked against disassembly; complete caller/callee coverage is not claimed.
- Target candidate: `sub_0002FBE0`, 28 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (28/28 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 28 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ef1644b780c2510f742ef3f957f82eca56932cb2458a35907d0af056013f8b07`; candidate object SHA-256: `d7096752f706bd5ef2da9e44db70432f133da857b15e95c27d436fe21edd0017`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
