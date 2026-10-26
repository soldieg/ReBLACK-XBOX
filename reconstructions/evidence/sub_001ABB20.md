# sub_001ABB20

- Function task: [#2733](https://github.com/soldieg/ReBLACK-XBOX/issues/2733).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001ABB20–0x001ABB68 inclusive, contiguous, 73 bytes; evidence `ev_4d77aa84788b674ec625dbafd455902c77167ebe0790ebfdd2fc1f246f02c5cd`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001ABB20`, 73 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (73/73 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 73 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8c2a8028450d5349ff0de00888f0079a590e8d7b484c6d9e9ef17e2d4edd781a`; candidate object SHA-256: `dfcc76f5273cfda72ed6fae99563d32f763209aa060d251cbb4939105dc47157`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
