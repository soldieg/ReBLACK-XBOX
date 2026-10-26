# sub_0013DEE0

- Function task: [#1013](https://github.com/soldieg/ReBLACK-XBOX/issues/1013).
- Batch: 60 of 100 (100-function lot).
- Dashboard candidate category before this PR: unmatched; fuzzy similarity 0.00% (not ObjDiff).
- Ghidra 12.1.3 body: 0x0013DEE0-0x0013DEFE inclusive, contiguous, 31 bytes.
- Static Ghidra references: 1 incoming direct call references, 0 resolved direct callees, 0 unresolved direct calls, 0 unresolved computed/indirect call sites. These are not runtime observations.
- Relationship group: data-table-group; members: SUB_0013DEE0. Ownerless inbound data-reference sources for this function: 0x002900A0. ABI/callback meaning remains pending where applicable.
- Target candidate: `sub_0013DEE0`, 31 bytes from the named decompdev candidate object.
- Static bytes: Ghidra capture = section-mapped XBE raw = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (31/31 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`. All 100 objects compiled without reported warnings or errors.
- ObjDiff 3.8.2: 100.00% against the named candidate object; matched symbol size 31 bytes.
- Candidate/compiled relocations: 0/0.
- Source SHA-256: `79d4f07135044fb34467067085e3d647862d1877fd372871cf04eb13e0eb6f75`; candidate object SHA-256: `5dbfd77f6856615a755f1e5c1678299df5808ae35046b1c124dae3e260a773bc`.

- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
