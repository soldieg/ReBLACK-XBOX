# sub_001AF9A0

- Function task: [#2771](https://github.com/soldieg/ReBLACK-XBOX/issues/2771).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AF9A0–0x001AFA78 inclusive, contiguous, 217 bytes; evidence `ev_e0774c46fd2472c0ed00f5dcc18fb3b4babf5264f28c40e531319a641ec0beda`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AF9A0`, 217 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (217/217 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 217 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `45789a19fec5e337690685ba41b23183e96dfbcd93add81dddae0ae47b33c21a`; candidate object SHA-256: `6bdad3a50e14745fcc3957606865f959b9c40bebcdb0700c303d77537321f243`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
