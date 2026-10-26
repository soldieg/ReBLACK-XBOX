# sub_0021CA6C

- Function task: [#4495](https://github.com/soldieg/ReBLACK-XBOX/issues/4495).
- Batch: 43 (current ten-batch run: 1/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021CA6C-0x0021CAC4 inclusive, contiguous, 89 bytes; evidence `ev_94d154850b167130bebb06695f544459354782547d16f4467dc2d544b461f36b`.
- Static Ghidra references: 1 caller sites, 2 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_0021CA6C`, 89 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (89/89 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 89 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3284f076a4428470284319f10aac8071c3c904e350d580dacceb884fea76d9d7`; candidate object SHA-256: `d6bfe64a16639d998e2ff70a23fb16f3a57add9300bdf726be3b06e9349587aa`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
