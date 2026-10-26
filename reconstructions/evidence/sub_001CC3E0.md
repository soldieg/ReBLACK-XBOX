# sub_001CC3E0

- Function task: [#6169](https://github.com/soldieg/ReBLACK-XBOX/issues/6169).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001CC3E0-0x001CC483 inclusive, contiguous, 164 bytes.
- Static call review: 0 unresolved direct-call site(s), 1 unresolved computed-call site(s); callers: `sub_001EA660`; callees: `sub_001C5FE0`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001CC3E0`, 164 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (164/164 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 164 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `30d413871bfb8a1b231c05c12c4c1d010761d086f9114ef6db8234246272e636`; candidate object SHA-256: `6a3a4e92d8067a8c6eaadfdca45e1fb66cb83bdf4bf5e2e0432caec26d5b1246`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
