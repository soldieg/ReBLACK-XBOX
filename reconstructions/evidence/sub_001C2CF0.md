# sub_001C2CF0

- Function task: [#2831](https://github.com/soldieg/ReBLACK-XBOX/issues/2831).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001C2CF0–0x001C2DA8 inclusive, contiguous, 185 bytes; evidence `ev_d5451e31a9c3ca9abc7035fa5c50becc91b970264dc875a5bad5a83cdf869887`.
- Static Ghidra references: 3 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001C2CF0`, 185 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (185/185 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 185 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0dcf421d790e1881ce0ef27486e47b3e4f5403fcb5ad521416c0a5b2fd3c9ff3`; candidate object SHA-256: `a305113ae769d5a8c7e14df73696e69883032fd0f5e7c044e54e448940338fcf`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
