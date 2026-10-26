# sub_0018FFC0

- Function task: [#2612](https://github.com/soldieg/ReBLACK-XBOX/issues/2612).
- Batch: 25 (current ten-batch run: 3/10; 100 functions).
- Ghidra 12.1.3 body: 0x0018FFC0–0x0019002A inclusive, contiguous, 107 bytes; evidence `ev_b9c650b98bcd99cb0a867141cdfdb12344c37303a3142bfb4a40adb7b50f31bd`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0018FFC0`, 107 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (107/107 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 107 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `dc869078fe8fffa8aadf3b47a813fc55f7c996ddd68be77db503a15925f54ee0`; candidate object SHA-256: `a503979f947cd24e44af7f08ddc5d5f376e69aae9e9b366a240d904cd11762bd`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
