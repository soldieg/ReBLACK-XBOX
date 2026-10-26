# sub_0021ACF4

- Function task: [#3263](https://github.com/soldieg/ReBLACK-XBOX/issues/3263).
- Batch: 31 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x0021ACF4â€“0x0021AD0B inclusive, contiguous, 24 bytes; evidence `ev_de0fb13223d95040a58fc5d43063f7311aaaacc9ce1316e4ff60e7d4c74f2364`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021ACF4`, 24 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (24/24 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 24 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `2bd75b53f1461e3d24a311d86856726d55bd0e83bdfad35dfe81ae2fca4f7a37`; candidate object SHA-256: `dc0bec5bf0575df8714f3227302afd67a03c04e08fa1cc20ca7d45dca93269da`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
