# sub_0018CFE0

- Function task: [#2593](https://github.com/soldieg/ReBLACK-XBOX/issues/2593).
- Batch: 25 (current ten-batch run: 3/10; 100 functions).
- Ghidra 12.1.3 body: 0x0018CFE0–0x0018D0D4 inclusive, contiguous, 245 bytes; evidence `ev_36872c5a6e51f64cdf367646d26be0940087945a8608609ce5256c5452130bf6`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0018CFE0`, 245 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (245/245 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 245 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `21a05d5026f6ee4d049b103fde2ecac152eeffd7ba4aa21e79fafcd98ccdc5e3`; candidate object SHA-256: `e062d3941451f43ce0f2a8d52ca148b58e1391e0b74fc80dfe4718e55b307394`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
