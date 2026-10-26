# sub_001BE1D0

- Function task: [#6154](https://github.com/soldieg/ReBLACK-XBOX/issues/6154).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x001BE1D0-0x001BE204 inclusive, contiguous, 53 bytes.
- Static call review: 0 unresolved direct-call sites; 1 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001BE1D0`, 53 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (53/53 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 53 bytes.
- Source SHA-256: `e58a9cfe756f4bf43073fd6597edb200a94e6d29cdfd2bc36adb42c09c2c0553`; candidate object SHA-256: `228b4c58e3166ec5984daab2481b6cd8849b9f567cdbd397cb6b6056c57f2d05`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
