# sub_001ABA80

- Function task: [#2731](https://github.com/soldieg/ReBLACK-XBOX/issues/2731).
- Batch: 26 (current ten-batch run: 4/10; 100 functions).
- Ghidra 12.1.3 body: 0x001ABA80–0x001ABAC8 inclusive, contiguous, 73 bytes; evidence `ev_9cf094fcbe026378f139663155c09af8cef4a23a07961667dd069310429191f2`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_001ABA80`, 73 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: raw XBE = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (73/73 bytes).
- Compiler: MSVC 19.51.36260.0 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 73 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `55209658f916d6450533199ae8522b2d313d1d401303ec3b9ef18a4f5eb35bea`; candidate object SHA-256: `3d6b64ec9c6d3757ff8fdf060c01f1892159ea1c6e4ab39d7c542477dd6e14fa`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
