# sub_000EBDF0

- Function task: [#5887](https://github.com/soldieg/ReBLACK-XBOX/issues/5887).
- Batch: 56 (current 100-lot run: 56/100; 100 functions).
- Dashboard candidate category: unmatched; fuzzy candidate similarity: n/a (not ObjDiff).
- Ghidra unresolved call sites: 0xebf8d; unresolved destinations remain unknown; no direct or indirect target type is inferred.
- Ghidra 12.1.3 body: 0x000EBDF0-0x000EBFAE inclusive, contiguous, 447 bytes; evidence `ev_d3681d856f9f7d707d6ada57236406ae33ffda482bda81bb34b2248dd35bb7b4`.
- Static Ghidra references: 0 caller sites, 2 resolved direct callees; call instructions without a resolved target: 1. These are not runtime observations.
- Resolved static callers: none reported.
- Resolved direct callees: 0xe3930 (FUN_000e3930), 0xe69b0 (FUN_000e69b0).
- Call relationship coverage: partial; limits: Ghidra's callee inventory omits targets of 1 call reference(s) or decoded call(s) without destinations..
- Target candidate: `sub_000EBDF0`, 447 bytes from `decompdev-progress-update-20261015/target-obj`.
- Static bytes: XBE section-mapped raw = derived PE = section-specific XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (447/447 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`; all 100 objects compiled without warnings or errors.
- ObjDiff objdiff-cli.exe 3.8.2: 100.00% against the named candidate object; matched symbol size 447 bytes.
- Candidate/compiled relocations: 0/0; both zero.
- Source SHA-256: `3662d50682cb13e2fc4b6c043aed2f3ef63c28fcc52e9329b3fc10e9732d37c6`; candidate object SHA-256: `70584eef8bcd02f968c0da3c0d8d2adf730f660dcd1d0039d0f5bc8ba8947969`.
- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
