# sub_001ABD30

- Function task: [#6134](https://github.com/soldieg/ReBLACK-XBOX/issues/6134).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x001ABD30-0x001ABE69 inclusive, contiguous, 314 bytes.
- Static call review: 0 unresolved direct-call sites; 1 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001ABD30`, 314 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (314/314 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 314 bytes.
- Source SHA-256: `576c41fbcfbbe87a4d4f240c72d91d6122f66b8435564b5ce3297bd313e694fe`; candidate object SHA-256: `f2bc67e7a9bbd9be2be3174751aa0e8ed36f15f11cc7dff5c71863ab3419b74f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
