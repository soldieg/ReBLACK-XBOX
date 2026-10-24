# sub_0018AEF0

- Function task: [#2567](https://github.com/soldieg/ReBLACK-XBOX/issues/2567).
- Batch: 25 (current ten-batch run: 3/10; 100 functions).
- Ghidra 12.1.3 body: 0x0018AEF0–0x0018AF56 inclusive, contiguous, 103 bytes; evidence `ev_e5c66be4664f87cdd3df170b2f5adcfe6be9eb1ae5ca0cbf38ab3dee652a1f55`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0018AEF0`, 103 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (103/103 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 103 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `273fc23ba6efee6dd7be31e174fb0a682ad7947a9af2497e08f5c2905a04a97d`; candidate object SHA-256: `d4ffddca0cafdeae13865e87ad9d881674453cb197eb39ffc1cdd3d59ad1cf83`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
