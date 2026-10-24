# sub_001FCBE0

- Function task: [#3089](https://github.com/soldieg/ReBLACK-XBOX/issues/3089).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FCBE0â€“0x001FCC50 inclusive, contiguous, 113 bytes; evidence `ev_e8b1ea58d1d080d86eb8f29026e52189ce26b212345023f739bcf750c0b83858`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FCBE0`, 113 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (113/113 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 113 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `6aa86da97bbeb7d5a3f639a8a627abc2b83beb2952aafa06b35828f1d5e18aca`; candidate object SHA-256: `7e0e25103ead560eed0135e3401d5d664f4106bb62c68fd3e390bcd4a8161597`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
