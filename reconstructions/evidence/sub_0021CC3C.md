# sub_0021CC3C

- Function task: [#5367](https://github.com/soldieg/ReBLACK-XBOX/issues/5367).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021CC3C-0x0021CCF2 inclusive, contiguous, 183 bytes; evidence `ev_7bb054e47d43e20cc270e72bbebcff196db073c71d0a48c4a18ca6706fb1352a`.
- Static Ghidra references: 1 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021CC3C`, 183 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (183/183 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 183 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c16307932658037bc283269ff4945b8d215e1a22594e96cb40a1ff45ed674664`; candidate object SHA-256: `6b4d59c680ed305956385384593c6ed7e5e3cbc1dd4bacbe2c87f6c7f063b333`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
