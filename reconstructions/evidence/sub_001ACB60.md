# sub_001ACB60

- Function task: [#6137](https://github.com/soldieg/ReBLACK-XBOX/issues/6137).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x001ACB60-0x001ACC8A inclusive, contiguous, 299 bytes.
- Static call review: 0 unresolved direct-call sites; 1 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001ACB60`, 299 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (299/299 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 299 bytes.
- Source SHA-256: `b670461a7abb5a0e3508c0c6d80300b5584f73d005bd06522ce27b4d86949de0`; candidate object SHA-256: `3787c2c0f5f472a9921e92da0e7e4f056092fc9e60c4f859cd45ebe1e955a629`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
