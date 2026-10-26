# sub_001FE1D0

- Function task: [#3095](https://github.com/soldieg/ReBLACK-XBOX/issues/3095).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FE1D0â€“0x001FE256 inclusive, contiguous, 135 bytes; evidence `ev_2f9b01457ebb5db592087ba6711c6d15210e8fa37f0537edcb970b8ad9baac49`.
- Static Ghidra references: 4 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FE1D0`, 135 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (135/135 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 135 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `0bcaff398adf33923a4d6dbf00d6ea6446610886a9b5411a91c969b212236ce3`; candidate object SHA-256: `62abcbc16425926e5fd8a36f371a807ce3ec1b5b29eb3fa377795745c914f264`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
