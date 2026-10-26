# sub_001AA6B0

- Function task: [#2712](https://github.com/soldieg/ReBLACK-XBOX/issues/2712).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001AA6B0–0x001AA791 inclusive, contiguous, 226 bytes; evidence `ev_cc1085fe399dd7c7c8f638a28ab57e08238732563d4a2868cbe0e683373d0572`.
- Static Ghidra references: 0 caller sites, 6 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001AA6B0`, 226 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (226/226 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 226 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `bb97af4bc1526fbe4a6d32159fe90205be354ca33d174bf2eee208db83ea2183`; candidate object SHA-256: `58e99810c26fc84342383b594baf5f565d633e5f8ce271c65396b717fa07b7be`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
