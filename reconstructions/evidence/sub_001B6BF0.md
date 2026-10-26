# sub_001B6BF0

- Function task: [#6148](https://github.com/soldieg/ReBLACK-XBOX/issues/6148).
- Batch: 58 (100 functions).
- Ghidra 12.1.3 body: 0x001B6BF0-0x001B6C55 inclusive, contiguous, 102 bytes.
- Static call review: 0 unresolved direct-call sites; 1 unresolved computed-call site(s). Ghidra reported no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001B6BF0`, 102 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (102/102 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 102 bytes.
- Source SHA-256: `5379c6df5298f82bbcbe068b653eab9a31dc757daa07d58192ef0773c3670d4e`; candidate object SHA-256: `463cc777f688ce599c7dfc947078220b27945d12975cc34468dec0f8de55b5ec`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
