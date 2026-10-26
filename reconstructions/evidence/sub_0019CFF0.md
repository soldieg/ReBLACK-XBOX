# sub_0019CFF0

- Function task: [#5079](https://github.com/soldieg/ReBLACK-XBOX/issues/5079).
- Batch: 48 (current 100-lot run: 48/100; 100 functions).
- Ghidra 12.1.3 body: 0x0019CFF0-0x0019D02E inclusive, contiguous, 63 bytes; evidence `ev_81c02dec2806b7ffad4fdfa86dd2a58ec7cd15e374db34ec09415d17e7f0927a`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0019CFF0`, 63 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (63/63 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 63 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4969fe6ec53b3d379e06b1dd72f4ea8804358e825b8e50ec1bd997cc6507b30c`; candidate object SHA-256: `c32b135a66f4e22f50f736fcc50ba947853a5df20fec120210638c0c088fcfe2`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
