# sub_001FC5D0

- Function task: [#3087](https://github.com/soldieg/ReBLACK-XBOX/issues/3087).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FC5D0â€“0x001FCA39 inclusive, contiguous, 1130 bytes; evidence `ev_cadc902487ce07232e022af24b83b51c67ab662d4338dd87940d817cd04b1d37`.
- Static Ghidra references: 0 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FC5D0`, 1130 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1130/1130 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1130 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `e93699ae4321d7be9d7cb1558489d53ba42affd389673ea4d3e694ccf19b940d`; candidate object SHA-256: `48101b312cb7d4a42ec26152d619db01224d6681be36e084931f37e96b9d0754`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
