# sub_001AECC0

- Function task: [#2760](https://github.com/soldieg/ReBLACK-XBOX/issues/2760).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AECC0–0x001AED31 inclusive, contiguous, 114 bytes; evidence `ev_e62d0a9ab2e17588eb04e60e12268b6f660cb4b90abe9cfd7e193ea36e3a17ac`.
- Static Ghidra references: 7 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AECC0`, 114 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (114/114 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 114 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `8133c4ed0ce7ab286846ba9dc3c376fcfcf3f0eb90ab0c6fccb5434890ac6ccc`; candidate object SHA-256: `3cf62f2ad2873ec7993e11fe46697d2eb914f78794eb8fbc0da7dfb2f70b7b7c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
