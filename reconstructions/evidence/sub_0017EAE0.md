# sub_0017EAE0

- Function task: [#2522](https://github.com/soldieg/ReBLACK-XBOX/issues/2522).
- Batch: 24 (current ten-batch run: 2/10; 100 functions).
- Ghidra 12.1.3 body: 0x0017EAE0–0x0017ECED inclusive, contiguous, 526 bytes; evidence `ev_9949d3fe72d7a438ae5f023b1fa4cde0dc8f30ee5915fd8373f860ff5f10c416`.
- Static Ghidra references: 2 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0017EAE0`, 526 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (526/526 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 526 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `c32441abf671978ae6633591de6d45a78254725a689a12b406f9bcb7c8c374cd`; candidate object SHA-256: `aca5d952b93e2ccff733d0906ff212538be96554482b96477365b4fff05cb0ec`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
