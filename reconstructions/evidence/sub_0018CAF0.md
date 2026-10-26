# sub_0018CAF0

- Function task: [#2584](https://github.com/soldieg/ReBLACK-XBOX/issues/2584).
- Batch: 25 (current ten-batch run: 3/10; 100 functions).
- Ghidra 12.1.3 body: 0x0018CAF0–0x0018CBA4 inclusive, contiguous, 181 bytes; evidence `ev_789ae7cba56514ea642e11205339ee3edc4025097892347a6d3f032fa4a1c396`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0018CAF0`, 181 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (181/181 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 181 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0b2747bc93e295828c5b63f84ad595ebd2e999acae02cfc52bb1e4371c230d35`; candidate object SHA-256: `960f48aa538e178623be5d659729917f1172eb840a69fd8114f6a7916a6a7f73`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
