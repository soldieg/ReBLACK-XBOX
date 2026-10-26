# sub_000F1CF0

- Function task: [#4399](https://github.com/soldieg/ReBLACK-XBOX/issues/4399).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x000F1CF0-0x000F1D4B inclusive, contiguous, 92 bytes; evidence `ev_2b9f8dee0912360da0f25b10a0e2ed348f4700827532d1bb21b64f04551f645c`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000F1CF0`, 92 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (92/92 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 92 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `279090375ab0914e4f4836bff84ad744517ef6dabba138069e18343896ce18ac`; candidate object SHA-256: `1ff444dd4972df5f991d400c548ac06e0f1c22dea24e1724f23fdba8a98273cc`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
