# sub_001ABE70

- Function task: [#6135](https://github.com/soldieg/ReBLACK-XBOX/issues/6135).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x001ABE70-0x001ABFB5 inclusive, contiguous, 326 bytes.
- Static call review: 0 unresolved direct-call sites; 1 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001ABE70`, 326 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (326/326 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 326 bytes.
- Source SHA-256: `1ad52b6f48a3a9e00c515bd94604680d075790ddce1e05ad7960830c869cc1e6`; candidate object SHA-256: `0a209ee6ac2f6692b96b187920870ffc1679945c1c5c1620a5dd31b179c92a59`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
