# sub_001E5DE0

- Function task: [#6200](https://github.com/soldieg/ReBLACK-XBOX/issues/6200).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001E5DE0-0x001E5EE1 inclusive, contiguous, 258 bytes.
- Static call review: 0 unresolved direct-call site(s), 1 unresolved computed-call site(s); callers: `sub_001E5EF0`; callees: `sub_0018DBB0`, `sub_00194360`, `sub_001954E0`, `sub_001956C0`, `sub_00195810`, `sub_00195A70`, `sub_0019F2B0`, `sub_001A01A0`, `sub_001A7D80`, `sub_001A7F20`, `sub_001A8550`, `sub_001AB780`, `sub_001AEF40`, `sub_001AF190`, `sub_001C4440`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001E5DE0`, 258 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (258/258 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 258 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `7321b75191cfbe8bcc3d1b20f7bf3908889a46f019fe30f3752c034c0bf12bf7`; candidate object SHA-256: `84a155f284fbd295de759e55b01d08aed4e07c2a0812bed8d9953c149dde338e`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
