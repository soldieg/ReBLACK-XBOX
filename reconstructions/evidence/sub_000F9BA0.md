# sub_000F9BA0

- Function task: [#4418](https://github.com/soldieg/ReBLACK-XBOX/issues/4418).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x000F9BA0-0x000F9BD2 inclusive, contiguous, 51 bytes; evidence `ev_a89a63ac10f99b8a233b0f7d819afe1b8526172404b9a324131aeccb9295afad`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000F9BA0`, 51 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (51/51 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 51 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f6ca1f0d50e73a5cedc0d1ae5d00816660d48018f36e3940162d625dd4d7810b`; candidate object SHA-256: `aa0bf5727954e3be3499393fccf06714b303abb1984d2c8b31d9015862b2415b`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
