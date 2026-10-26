# sub_0009FE1D

- Function task: [#4047](https://github.com/soldieg/ReBLACK-XBOX/issues/4047).
- Batch: 39 (current ten-batch run: 7/10; 100 functions).
- Ghidra 12.1.3 body: 0x0009FE1D-0x0009FE5F inclusive, contiguous, 67 bytes; evidence `ev_e114c63048df882cef1a8ba5801d89790bb52f4fed303ed67fad98000a2b0cca`.
- Static Ghidra references: 0 caller sites, 3 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0009FE1D`, 67 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (67/67 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 67 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `b315679ced5773020158eda240892a9e7cad933938dbf9ada89b4dfbb62b04ef`; candidate object SHA-256: `8176a3582cbf71bf574784fc1441bdacff878f908187bc4c9f0706346db58223`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
