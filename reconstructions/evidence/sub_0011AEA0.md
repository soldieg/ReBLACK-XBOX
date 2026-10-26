# sub_0011AEA0

- Function task: [#4426](https://github.com/soldieg/ReBLACK-XBOX/issues/4426).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0011AEA0-0x0011AEBE inclusive, contiguous, 31 bytes; evidence `ev_66750414d276cc61a0d563803ba845947d3e7ef445c120383bdceb9122368c56`.
- Static Ghidra references: 3 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0011AEA0`, 31 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (31/31 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 31 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a65b7d03ec04998f6dd5ede11aca577d86d146a3081d7087560eeee864f5ef6a`; candidate object SHA-256: `48398f4ff48062150f9f146192568ef88ac0d1dbe9996197e835d790f90355af`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
