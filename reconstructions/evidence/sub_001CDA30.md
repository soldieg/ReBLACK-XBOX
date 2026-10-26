# sub_001CDA30

- Function task: [#6171](https://github.com/soldieg/ReBLACK-XBOX/issues/6171).
- Batch: 59 (100 functions).
- Ghidra 12.1.3 body: 0x001CDA30-0x001CDBAC inclusive, contiguous, 381 bytes.
- Static call review: 0 unresolved direct-call site(s), 1 unresolved computed-call site(s); callers: `sub_001DC910`, `sub_001EC450`; callees: `sub_00012500`. Ghidra reports no inbound call or data references without an owning function. These are static references, not runtime observations.
- Target candidate: `sub_001CDA30`, 381 bytes from `decompdev-candidate-report-20261014/target-obj`.
- Static bytes: Ghidra = XBE section-mapped raw = derived PE raw/section = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (381/381 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 selected objects compiled without reported warnings or errors.
- ObjDiff `objdiff-cli.exe` 3.8.2: 100.00% against the named candidate object; matched symbol size 381 bytes. Candidate/compiled relocations: 0/0.
- Source SHA-256: `936f1df94cdac6400464af4644f85d72e0e299e1c6b84529ed1b8b402b8bf3d5`; candidate object SHA-256: `1d4edb21d7179ad2a5951bf0f083a8e0ab5e4fa84b5c9574d65a034b7b1d53fb`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
