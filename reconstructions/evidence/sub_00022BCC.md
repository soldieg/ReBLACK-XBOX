# sub_00022BCC

- Function task: [#4650](https://github.com/soldieg/ReBLACK-XBOX/issues/4650).
- Batch: 45 (current 100-lot run: 45/100; 100 functions).
- Ghidra 12.1.3 body: 0x00022BCC-0x00022CAC inclusive, contiguous, 225 bytes; evidence `ev_9ee97d6fd3271462db457287456d857f55b0284f8e3240725284f3489feb66f8`.
- Static Ghidra references: 2 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; 2 indirect call instructions and 0 incoming sites without a caller owner remain unresolved. Direct call edges were checked against disassembly; complete caller/callee coverage is not claimed.
- Target candidate: `sub_00022BCC`, 225 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (225/225 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 225 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e82dd8c167d2d37bba5eea36043a9b3a2644081ff8e21c20258adfce95199c00`; candidate object SHA-256: `8234ba26a843a7853e8e066ed13e959dafb33b7511b40dda761033827c7c8303`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
