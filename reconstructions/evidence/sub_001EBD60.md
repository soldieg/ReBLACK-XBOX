# sub_001EBD60

- Function task: [#6206](https://github.com/soldieg/ReBLACK-XBOX/issues/6206).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001EBD60-0x001EBFDA inclusive, contiguous, 635 bytes.
- Static call review: 0 unresolved direct-call site(s), 2 unresolved computed-call site(s); callers: `sub_001EDC90`, `sub_0020C780`, `sub_0020C870`, `sub_0020CD50`; callees: `sub_000BE3F0`, `sub_0012F790`, `sub_0013F8D0`, `sub_001684B0`, `sub_00189B40`, `sub_001D51A0`, `sub_001EB6B0`, `sub_001EBB40`, `sub_001F6230`, `sub_001FB0D0`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001EBD60`, 635 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (635/635 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 635 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `fd743feb3ad7ad61ae097ca2e72cc48cd24bda2de7cfc33fe5385dbf21254a42`; candidate object SHA-256: `3bf64b8fd6a124cd4c4e4cd14e9c66a5e68c4fb67f0bd852bb980a8db31ab5fd`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
