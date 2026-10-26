# sub_001EDC20

- Function task: [#6209](https://github.com/soldieg/ReBLACK-XBOX/issues/6209).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001EDC20-0x001EDC86 inclusive, contiguous, 103 bytes.
- Static call review: 0 unresolved direct-call site(s), 2 unresolved computed-call site(s); callers: `sub_001F1080`; callees: `sub_001780B0`, `sub_002069F0`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001EDC20`, 103 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (103/103 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 103 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `1dc44c4a75c7799b784409cde25bc0b73b9015d19bbe9b8b0bdf2f843b57d782`; candidate object SHA-256: `efe7693bd2989d7fa5b8fb19c625ce5e73fc2f9500583073cee0269c46e55c90`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
