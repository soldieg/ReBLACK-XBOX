# sub_001DA1A0

- Function task: [#6185](https://github.com/soldieg/ReBLACK-XBOX/issues/6185).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001DA1A0-0x001DA232 inclusive, contiguous, 147 bytes.
- Static call review: 0 unresolved direct-call site(s), 2 unresolved computed-call site(s); callers: `sub_001AE300`, `sub_001DA240`, `sub_001DA2F0`, `sub_001DA3A0`, `sub_001DEC20`, `sub_001DF300`, `sub_001DF340`, `sub_001DF440`, `sub_001E68B0`, `sub_002056A0`, `sub_002057D0`, `sub_002059A0`, `sub_00205B20`, `sub_00205C60`; callees: `sub_000DB5B0`, `sub_000DBBE0`, `sub_001ABCC0`, `sub_001B6770`, `sub_001BEB40`, `sub_001C5A50`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001DA1A0`, 147 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (147/147 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 147 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `7091bf0caf25762f7bc81d21c5e410176056c62281c18b3ecca7ad957ddb6f13`; candidate object SHA-256: `ff596d4781f2e3e0ad3bf424a6e787bb5357e4d0fe951a2e912b7537d0400d7a`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
