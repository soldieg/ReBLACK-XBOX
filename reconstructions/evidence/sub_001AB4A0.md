# sub_001AB4A0

- Function task: [#6132](https://github.com/soldieg/ReBLACK-XBOX/issues/6132).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x001AB4A0-0x001AB5F8 inclusive, contiguous, 345 bytes.
- Static call review: 0 unresolved direct-call sites; 2 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001AB4A0`, 345 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (345/345 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 345 bytes.
- Source SHA-256: `3e1f9037fbf6d6856af9427c87fe732eb05275577977db5b1b86be5e8c0d528b`; candidate object SHA-256: `4c0b67b24a532cc6ee9e1e300dd512e65daebe39ee4399ae58aafc9055d794f1`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
