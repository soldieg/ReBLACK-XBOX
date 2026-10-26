# sub_001EB6B0

- Function task: [#6205](https://github.com/soldieg/ReBLACK-XBOX/issues/6205).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001EB6B0-0x001EB7E3 inclusive, contiguous, 308 bytes.
- Static call review: 0 unresolved direct-call site(s), 1 unresolved computed-call site(s); callers: `sub_001EB7F0`, `sub_001EBD60`; callees: `sub_0015F110`, `sub_0015F370`, `sub_001EB1F0`, `sub_001EB7F0`, `sub_001F3C90`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001EB6B0`, 308 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (308/308 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 308 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `6b77a3a2968f477126514506eca4b3ee86f384271c56c36c03023161a1831612`; candidate object SHA-256: `53bbcafbf2477e45af9c60858cebb7d20896034b0289f2b69b9167098b4c2c26`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
