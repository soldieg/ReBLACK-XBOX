# sub_001DB5D0

- Function task: [#6184](https://github.com/soldieg/ReBLACK-XBOX/issues/6184).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001DB5D0-0x001DB5F7 inclusive, contiguous, 40 bytes.
- Static call review: 0 unresolved direct-call site(s), 1 unresolved computed-call site(s); callers: `sub_001AF190`; callees: `sub_001D76F0`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001DB5D0`, 40 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (40/40 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 40 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `87cd551b366515ceb5cf48602d6156988b7580902ed784b1d7c2ea0cb2e87c0f`; candidate object SHA-256: `748951fcc5769dd27a32f7cf126d8676d1ec658b86f5e7b048a4202068c8963f`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
