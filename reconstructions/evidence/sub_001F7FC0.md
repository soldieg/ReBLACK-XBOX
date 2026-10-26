# sub_001F7FC0

- Function task: [#3046](https://github.com/soldieg/ReBLACK-XBOX/issues/3046).
- Batch: 29 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x001F7FC0â€“0x001F803C inclusive, contiguous, 125 bytes; evidence `ev_ecd063f1637b080858885b9da382afccaebfd6bebfc22bd06e698e7622481ca9`.
- Static Ghidra references: 1 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001F7FC0`, 125 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (125/125 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 125 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `362c405cdced46ed38cf3e4a58bf643aecb5efde0192c5693f7b6db55a497aff`; candidate object SHA-256: `b27b9e65cbb9ac9765d453da19cd54805f7ee19021914f38ee4a6f2f9064d653`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
