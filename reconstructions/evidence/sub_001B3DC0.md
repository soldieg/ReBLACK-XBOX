# sub_001B3DC0

- Function task: [#6144](https://github.com/soldieg/ReBLACK-XBOX/issues/6144).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x001B3DC0-0x001B3E1A inclusive, contiguous, 91 bytes.
- Static call review: 0 unresolved direct-call sites; 1 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001B3DC0`, 91 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (91/91 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 91 bytes.
- Source SHA-256: `9fe71ff9125fdfaf22483165425b3229abd5eb5e24ae6aad9cf50796ac7a9f4d`; candidate object SHA-256: `91616b8e992a11b22a1853ee6867ea7ec74bc5511aafebb7503d0a1486bf0994`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
