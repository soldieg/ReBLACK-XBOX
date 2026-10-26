# sub_001FA3A0

- Function task: [#5349](https://github.com/soldieg/ReBLACK-XBOX/issues/5349).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x001FA3A0-0x001FA550 inclusive, contiguous, 433 bytes; evidence `ev_054f73a2cea46b4936e117b1dfb0e2cf51b82df0ca93db988500619a5f061b81`.
- Static Ghidra references: 1 caller sites, 0 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001FA3A0`, 433 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (433/433 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 433 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `923ee69cef5c20101f7a5bb1f6623af6c81c5b5e04a55761f032aef2ba8dda55`; candidate object SHA-256: `39f07b14b943d627657545005b65278f417533c1d9fdeab006ba22f06bc4869d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
