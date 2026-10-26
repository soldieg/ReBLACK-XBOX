# sub_000DCC40

- Function task: [#4358](https://github.com/soldieg/ReBLACK-XBOX/issues/4358).
- Batch: 42 (current ten-batch run: 10/10; 100 functions).
- Ghidra 12.1.3 body: 0x000DCC40-0x000DCF7B inclusive, contiguous, 828 bytes; evidence `ev_e09ad98bea4b9e4afa6ed6bf356fa249f574bcef8215ff078a9724886148deae`.
- Static Ghidra references: 3 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000DCC40`, 828 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (828/828 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 828 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `48dcd5a5e1e911fb62f64471a90dafa53d9b186c8638bb7446a6d7c2ea58cc52`; candidate object SHA-256: `98a185e4fb554737054034f54679716e6b8326fb82b83392dad1b250a7ee3526`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
