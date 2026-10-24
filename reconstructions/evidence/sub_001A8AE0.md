# sub_001A8AE0

- Function task: [#2694](https://github.com/soldieg/ReBLACK-XBOX/issues/2694).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001A8AE0–0x001A8B20 inclusive, contiguous, 65 bytes; evidence `ev_751c44ff7f11d956a1ca1d20b8cd2b363f28d79a5214007e097dbaec91a40b8b`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001A8AE0`, 65 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (65/65 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 65 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0d3d54f2886b7e3c0e03abdcacf802892b56d85f92fad808f44f2b34e886a08b`; candidate object SHA-256: `d8c50585adb73f475c3c0f7f6930da090bf4fb5244a136d2c0dcadb8dd0953ab`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
