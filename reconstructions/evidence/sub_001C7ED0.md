# sub_001C7ED0

- Function task: [#6166](https://github.com/soldieg/ReBLACK-XBOX/issues/6166).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001C7ED0-0x001C8015 inclusive, contiguous, 326 bytes.
- Static call review: 0 unresolved direct-call site(s), 1 unresolved computed-call site(s); callers: `sub_001EB440`; callees: none observed. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001C7ED0`, 326 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (326/326 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 326 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `359d0a8cff483b6d0fd16976222f0f67f0f02f7bfd2750e470275181ea33e9ca`; candidate object SHA-256: `007f0145c1eb1f20902b6c209b8129cce774a2847b75d6b152f7b9b35a446001`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
