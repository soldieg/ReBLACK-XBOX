# sub_001CA0A0

- Function task: [#5228](https://github.com/soldieg/ReBLACK-XBOX/issues/5228).
- Batch: 50 (current 100-lot run: 50/100; 100 functions).
- Ghidra 12.1.3 body: 0x001CA0A0-0x001CA167 inclusive, contiguous, 200 bytes; evidence `ev_a7da21052c3c73fd0a8208918861061c6f8f5a856f3c72197b82f79fa2513ae2`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_001CA0A0`, 200 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (200/200 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 200 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9d0071f0add8f4dc9820d47d2bc696b8ce7af3c306a9c17c45f7f72c950f9545`; candidate object SHA-256: `6c2d275fc7ab76ae79e0044835dd3c0f173ae1713c1610bea83722a334fed2d3`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
