# sub_000AAE52

- Function task: [#4156](https://github.com/soldieg/ReBLACK-XBOX/issues/4156).
- Batch: 40 (current ten-batch run: 8/10; 100 functions).
- Ghidra 12.1.3 body: 0x000AAE52-0x000AAE59 inclusive, contiguous, 8 bytes; evidence `ev_e2f6c57c0e4f59d098926b86dca26e98dcf877c42e80692e437a8198e6869417`.
- Static Ghidra references: 1 caller sites, 1 callees; unresolved calls: 0. These are not runtime observations.
- Target candidate: `sub_000AAE52`, 8 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (8/8 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 8 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `454983e232c72af5515b6beb8d350b79a545d3bbf48a1c822b71dcd12378465b`; candidate object SHA-256: `ed01bb21681428f8454d8a9b8e6c7a224c3e5520de9ac54ed410345ae01da4ca`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
