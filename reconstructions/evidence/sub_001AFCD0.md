# sub_001AFCD0

- Function task: [#2773](https://github.com/soldieg/ReBLACK-XBOX/issues/2773).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AFCD0–0x001AFE5F inclusive, contiguous, 400 bytes; evidence `ev_3d5072e854309b3bf55e6632e82955c37f048aa4772543135af8a678d121c713`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AFCD0`, 400 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (400/400 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 400 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `9434d03f0693a5805a120fa60ca64ec8284d116db4e3e4ea8ab26567b6818098`; candidate object SHA-256: `1037c93cbef8a2b53cb95dfc38a668ad8742de72bf4296ee667e4e68e28542ae`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
