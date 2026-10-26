# sub_001C5FE0

- Function task: [#6164](https://github.com/soldieg/ReBLACK-XBOX/issues/6164).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001C5FE0-0x001C6054 inclusive, contiguous, 117 bytes.
- Static call review: 0 unresolved direct-call site(s), 1 unresolved computed-call site(s); callers: `sub_001A0BA0`, `sub_001CC3E0`; callees: none observed. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001C5FE0`, 117 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (117/117 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 117 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `8af283c781f3e3e0a0222155612dfc5486762ce335d88891236fb7222dc7fb45`; candidate object SHA-256: `0b0e1060f783ad778d209551b855d1b1d5ecefa55334150936581477d293d200`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
