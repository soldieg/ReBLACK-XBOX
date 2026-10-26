# sub_001AA3F0

- Function task: [#2709](https://github.com/soldieg/ReBLACK-XBOX/issues/2709).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AA3F0–0x001AA609 inclusive, contiguous, 538 bytes; evidence `ev_01df0a009080e65b05c6a8fc10d22084f3009443870ac6422e3d2fb48f6a753d`.
- Static Ghidra references: 0 caller sites, 7 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AA3F0`, 538 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (538/538 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 538 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `cf311db600706aebfd27b7d5f12a0bee04e6cd725837e404f2819b7fdcea7b89`; candidate object SHA-256: `49f3b0929706470d76a76c63e1f845095b2a8088e606a9b98d444a8c49eb522f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
