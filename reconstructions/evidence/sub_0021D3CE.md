# sub_0021D3CE

- Function task: [#5382](https://github.com/soldieg/ReBLACK-XBOX/issues/5382).
- Batch: 51 (current 100-lot run: 51/100; 100 functions).
- Ghidra 12.1.3 body: 0x0021D3CE-0x0021D530 inclusive, contiguous, 355 bytes; evidence `ev_43cc1dfa710d5444d7c76c082122b17aa69c760ff912317c430c80b454ae2c4f`.
- Static Ghidra references: 1 caller sites, 4 callees; unresolved calls: 0. These are not runtime observations.
- Relationship coverage: complete; limitations: none recorded.
- Target candidate: `sub_0021D3CE`, 355 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (355/355 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 355 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `4610fbfd7aa9643674a28b91a2493f08f6e3490174967dce768f41a8ad1d3853`; candidate object SHA-256: `84fae111d2c0be514e5fa82ee6a3e0390f3cab2a23330e36fa87e523a1311652`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
