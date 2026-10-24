# sub_0018CDF0

- Function task: [#2586](https://github.com/soldieg/ReBLACK-XBOX/issues/2586).
- Batch: 25 (current ten-batch run: 3/10; 100 functions).
- Ghidra 12.1.3 body: 0x0018CDF0–0x0018CF52 inclusive, contiguous, 355 bytes; evidence `ev_c563b536824744ff0745957fa5030051347131f14f9668c29e1324f245072478`.
- Static Ghidra references: 4 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0018CDF0`, 355 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (355/355 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 355 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e305805a8e0370b35ab3e87e35a8687845970f7dc71b0fbdf9e4d49dd0e64d4f`; candidate object SHA-256: `c70e12da32ddd3950f64e624558ccf4ad0adcd61089401f07fdbfe8d7fc7ba04`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
