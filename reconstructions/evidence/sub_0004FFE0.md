# sub_0004FFE0

- Function task: [#4859](https://github.com/soldieg/ReBLACK-XBOX/issues/4859).
- Batch: 46 (current 100-lot run: 46/100; 100 functions).
- Ghidra 12.1.3 body: 0x0004FFE0-0x000501A6 inclusive, contiguous, 455 bytes; evidence `ev_86562b01cf82e29e0cc6d8c6291d40699797085502f4203e8a9527a7e5377f41`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: partial; 4 indirect call instructions and 1 incoming sites without a caller owner remain unresolved. Direct call edges were checked against disassembly; complete caller/callee coverage is not claimed.
- Target candidate: `sub_0004FFE0`, 455 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (455/455 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 455 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `81d231650de10da0cf2f2ea48ff3bbd647b52e5b349ebc19c66705a617114bb6`; candidate object SHA-256: `fd3b78b46f8685b02459f1db1a44353d5a1fccec2161c523d1b2cd297d20ab16`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
