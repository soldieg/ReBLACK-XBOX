# sub_001AD2B0

- Function task: [#2745](https://github.com/soldieg/ReBLACK-XBOX/issues/2745).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AD2B0–0x001AD2EA inclusive, contiguous, 59 bytes; evidence `ev_bd3b7a27d149c27960d80c6b21b4bc8ee782cdd38ba6bec66b968680f4bdf0b0`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AD2B0`, 59 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (59/59 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 59 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `defd4d8dbd734384d0137a847aa91328ee3520668fcce2c829359373fb0c3ff7`; candidate object SHA-256: `acc33e39d7def03b03eb25c4f79aeb9b3c39f4be97345fb8c3247bffc2aca929`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
