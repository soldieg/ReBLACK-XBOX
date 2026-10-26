# sub_001A8BF0

- Function task: [#6129](https://github.com/soldieg/ReBLACK-XBOX/issues/6129).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x001A8BF0-0x001A906B inclusive, contiguous, 1148 bytes.
- Static call review: 0 unresolved direct-call sites; 17 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001A8BF0`, 1148 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1148/1148 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 1148 bytes.
- Source SHA-256: `e7d5d334d08a864ad1188983054f5ebe3abf2fd019c1cd57ae0330034c8f1bfb`; candidate object SHA-256: `2d79287d5d16b2c8f413a7a50917fa2465c969621e292bb5eded6d142a00871c`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
