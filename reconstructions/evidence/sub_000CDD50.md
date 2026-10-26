# sub_000CDD50

- Function task: [#4262](https://github.com/soldieg/ReBLACK-XBOX/issues/4262).
- Batch: 41 (current ten-batch run: 9/10; 100 functions).
- Ghidra 12.1.3 body: 0x000CDD50-0x000CDF90 inclusive, contiguous, 577 bytes; evidence `ev_c243891bc1dcf1f52988f25420fa4705e68c6b5b3c0eaf4fbe2fcd9c5ea7cad4`.
- Static Ghidra references: 0 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000CDD50`, 577 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (577/577 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 577 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6127fb431eed07b4181ae53ae149095e2a0bfffa87bfe154902f21da874c9154`; candidate object SHA-256: `4481a7aac0f916e20f0958857107b4269e87aff20f24b5690cd2b378b54ff273`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
