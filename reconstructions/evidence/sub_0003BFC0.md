# sub_0003BFC0

- Function task: [#4455](https://github.com/soldieg/ReBLACK-XBOX/issues/4455).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0003BFC0-0x0003C21A inclusive, contiguous, 603 bytes; evidence `ev_a831347a5b60c713fc9a0faa4dacbca0a957be338df632815776b7a52af0ecef`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0003BFC0`, 603 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (603/603 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 603 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `ed1988d0775cfb259864bbd8b936f1588465245bbb67aaf8dbbc8bf773cb7340`; candidate object SHA-256: `3d4e23262dd54529f9cedfa6d3627d27d772da8a5bdb86922bac3519d474cf2d`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
