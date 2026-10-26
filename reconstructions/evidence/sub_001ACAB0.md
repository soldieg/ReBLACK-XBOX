# sub_001ACAB0

- Function task: [#6136](https://github.com/soldieg/ReBLACK-XBOX/issues/6136).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x001ACAB0-0x001ACB5D inclusive, contiguous, 174 bytes.
- Static call review: 0 unresolved direct-call sites; 1 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001ACAB0`, 174 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (174/174 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 174 bytes.
- Source SHA-256: `ce491de4d827de1ec6ba95356c1d776e18ab5d8a908c9ceb6a3c3e717cc0d2d2`; candidate object SHA-256: `a862a1494958acde1d1817e422994ef91a58a76493c2ef9db8754fb545b1d0a1`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
