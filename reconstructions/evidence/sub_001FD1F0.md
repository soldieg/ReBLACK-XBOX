# sub_001FD1F0

- Function task: [#3093](https://github.com/soldieg/ReBLACK-XBOX/issues/3093).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FD1F0â€“0x001FD766 inclusive, contiguous, 1399 bytes; evidence `ev_ff1d663addabc129227e0c48076ce0598c47d561c70c9215baa9b24591562d45`.
- Static Ghidra references: 0 caller sites, 13 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FD1F0`, 1399 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1399/1399 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1399 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c058c3bd6ccb0efdb67a1f42645c7e08131092b35773aaa04423712b7933e70f`; candidate object SHA-256: `a3ef2e7586c06f9f0f6848ccc2e7152910951f7813a468303c0934147510b47c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
