# sub_001BBCA0

- Function task: [#2790](https://github.com/soldieg/ReBLACK-XBOX/issues/2790).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001BBCA0–0x001BBD2F inclusive, contiguous, 144 bytes; evidence `ev_72184b03047b3c8d53daec2618bb1c4a3137cae966c812d2c3d6b5b05910dce3`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001BBCA0`, 144 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (144/144 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 144 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `b1ac43ca06ae0f5c7a59762aa4009791df71b24b5c91ce87ad0669512134a4cd`; candidate object SHA-256: `ed37e46484f64fc38bea6e1c9d4f8f3b16239688e3ca93131d14c2eadb002e31`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
