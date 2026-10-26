# sub_001DE8C0

- Function task: [#5266](https://github.com/soldieg/ReBLACK-XBOX/issues/5266).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001DE8C0-0x001DE94D inclusive, contiguous, 142 bytes; evidence `ev_b26defec8080c00398e953af894d83ed8cfe0dc3cca43eae8169c1f11179d1cc`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001DE8C0`, 142 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (142/142 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 142 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9ead59ae31a591bdc1ecf90c4ceae5d693321de7415ecdbe9c71c2b110fb4566`; candidate object SHA-256: `d4d74c6a05eb83896c6fd220e395d7f9f7c5fed8ca2059d286025ea22daae481`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
