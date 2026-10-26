# sub_001C5CD0

- Function task: [#2846](https://github.com/soldieg/ReBLACK-XBOX/issues/2846).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001C5CD0–0x001C5D97 inclusive, contiguous, 200 bytes; evidence `ev_f3bcb3646ef3b1b438bea61c24705a34a70b0579026de3ea4db0638f31eb5159`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001C5CD0`, 200 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (200/200 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 200 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e4786ef3ddb1a2db7cc610eb2309bf783ab9c8a1273145de24003fe839931e6b`; candidate object SHA-256: `2fe5ca2a40c34da8e594577ca40a4098fc1a2ca26363e251da32ada4ec0db158`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
