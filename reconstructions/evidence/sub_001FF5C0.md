# sub_001FF5C0

- Function task: [#3099](https://github.com/soldieg/ReBLACK-XBOX/issues/3099).
- Batch: 30 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x001FF5C0â€“0x001FF63A inclusive, contiguous, 123 bytes; evidence `ev_0279976f9c49c5b0ba791a22774d77589c30789c347f063f8021d48bbb7611dd`.
- Static Ghidra references: 0 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001FF5C0`, 123 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (123/123 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 123 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `f9a4cf7f7bb75f2429a3e9d9073b7f8d59709ddfc382aaeba87deec344f26965`; candidate object SHA-256: `648f1a4425fe7fbc1a0433b57c7b317ea9a11da2d746b0b0ddbce81d3379a236`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
