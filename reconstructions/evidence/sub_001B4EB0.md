# sub_001B4EB0

- Function task: [#6145](https://github.com/soldieg/ReBLACK-XBOX/issues/6145).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x001B4EB0-0x001B532C inclusive, contiguous, 1149 bytes.
- Static call review: 0 unresolved direct-call sites; 18 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001B4EB0`, 1149 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1149/1149 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1149 bytes.
- Source SHA-256: `3e51f70492ff7357f92c30b5f60f16941894b15f4f3ea8b4af41cef585f6a9e2`; candidate object SHA-256: `27b6f5d3e4fc7880a95b79fe86c657133b772ab7635d6a25808d6d9772d2354f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
