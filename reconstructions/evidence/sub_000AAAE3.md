# sub_000AAAE3

- Function task: [#4154](https://github.com/soldieg/ReBLACK-XBOX/issues/4154).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000AAAE3-0x000AAD59 inclusive, contiguous, 631 bytes; evidence `ev_0d4cf1befd0a518cfb77a0fe042cba2fee40ceb95ed2eec46489618438fb6aa5`.
- Static Ghidra references: 1 caller sites, 5 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000AAAE3`, 631 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (631/631 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 631 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `a8c095ea74bd30a173ba1107d15cfa1555695018a2e997c620bb9cf66ad4d5af`; candidate object SHA-256: `adc785a8ea2393cb99e48687d8380737880128d443e67b35cbed56e33124eeec`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
