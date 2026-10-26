# sub_0021E1AE

- Function task: [#5401](https://github.com/soldieg/ReBLACK-XBOX/issues/5401).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021E1AE-0x0021E1CE inclusive, contiguous, 33 bytes; evidence `ev_1fb48253749c2be9f388972505ee0c21cf975105a074f176b6fcc8ba48c62bc7`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021E1AE`, 33 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (33/33 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 33 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `5c4bda2575fda817ea56a6e841136e876baab492c146334e2ab5208519e89065`; candidate object SHA-256: `ab869344481f4d65a7d2e08bf23d0c03aff8a43a5c4a21fc0e7115b67deabc4c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
