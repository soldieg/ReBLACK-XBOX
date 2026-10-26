# sub_001BBFC0

- Function task: [#2791](https://github.com/soldieg/ReBLACK-XBOX/issues/2791).
- Batch: 27 (current ten-batch run: 5/10; 100 functions).
- Ghidra 12.1.3 body: 0x001BBFC0–0x001BC03C inclusive, contiguous, 125 bytes; evidence `ev_c47f1547fb238781efb23ddfa0af2e058bfce92726459f6e31058dbcc608ca70`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001BBFC0`, 125 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (125/125 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 125 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `bf99ac3078ffc12949aad5e7c18c7e02e3144311c9903187dc9327c2b17e320e`; candidate object SHA-256: `af63a4b962a8c99d4d325743b0c175284096b29a40bff9e152c092d116989921`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
