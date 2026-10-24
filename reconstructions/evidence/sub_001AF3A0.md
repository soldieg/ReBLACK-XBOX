# sub_001AF3A0

- Function task: [#2764](https://github.com/soldieg/ReBLACK-XBOX/issues/2764).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AF3A0–0x001AF3B7 inclusive, contiguous, 24 bytes; evidence `ev_750ec16f8984631133f37decd981d2a591e2b077228719fd412b0512a54773b3`.
- Static Ghidra references: 2 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AF3A0`, 24 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (24/24 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 24 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `dd84fffa967ee2580da8d27110d7d520a38ba2c3e81e97cf4ff67775875e80f1`; candidate object SHA-256: `ea17621d5d6d709fbecd45943793668f6edd47fab6962465c4d09e6c382c7a53`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
