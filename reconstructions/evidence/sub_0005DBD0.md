# sub_0005DBD0

- Function task: [#3826](https://github.com/soldieg/ReBLACK-XBOX/issues/3826).
- Batch: 37 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x0005DBD0-0x0005DC10 inclusive, contiguous, 65 bytes; evidence `ev_f049660d78ddd561e74874626241c5446a9c77c2f53e8e7854b5bd4da70fbc89`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0005DBD0`, 65 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (65/65 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 65 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `d1dbf899765096df28eb28e830acb09d57f30caf9784f71ef8f344e8d3b7d6ca`; candidate object SHA-256: `6fb44482ddb81e38450b7c9093420b4c9373a6b77b897417f1f151dbc2ed2b70`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
