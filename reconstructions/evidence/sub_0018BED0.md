# sub_0018BED0

- Function task: [#2576](https://github.com/soldieg/ReBLACK-XBOX/issues/2576).
- Batch: 25 (current ten-batch run: 3/10; 100 functions).
- Ghidra 12.1.3 body: 0x0018BED0–0x0018BF2B inclusive, contiguous, 92 bytes; evidence `ev_eb650eba27ef60752bfdfe3042411364cf4a4709c3754d0a8f98dcb93f996272`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0018BED0`, 92 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (92/92 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 92 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `216abe932a256496e6b78b515ac7ff9a4330f72ace39ad6d350eaea7bdcd9a2b`; candidate object SHA-256: `042806ccdb745b18ec9f7ae2557cdf7e3077b36f0d04b0ee6c02f9a1b3bd31b7`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
