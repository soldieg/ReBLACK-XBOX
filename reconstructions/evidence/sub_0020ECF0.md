# sub_0020ECF0

- Function task: [#6263](https://github.com/soldieg/ReBLACK-XBOX/issues/6263).
- Batch: 60 of 100 (100-function lot).
- Dashboard candidate category before this PR: unmatched; fuzzy similarity 0.00% (not ObjDiff).
- Ghidra 12.1.3 body: 0x0020ECF0-0x0020F265 inclusive, contiguous, 1398 bytes.
- Static Ghidra references: 0 incoming direct call references, 25 resolved direct callees, 0 unresolved direct calls, 3 unresolved computed/indirect call sites. These are not runtime observations.
- Relationship group: data-table-group; members: SUB_001FF850, SUB_0020B770, SUB_0020C630, SUB_0020CFC0, SUB_0020E7D0, SUB_0020EA20, SUB_0020ECF0, SUB_0020F280. Ownerless inbound data-reference sources for this function: 0x00295318. ABI/callback meaning remains pending where applicable.
- Target candidate: `sub_0020ECF0`, 1398 bytes from the named decompdev candidate object.
- Static bytes: Ghidra capture = section-mapped XBE raw = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (1398/1398 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`. All 100 objects compiled without reported warnings or errors.
- ObjDiff 3.8.2: 100.00% against the named candidate object; matched symbol size 1398 bytes.
- Candidate/compiled relocations: 0/0.
- Source SHA-256: `1dfc1a54695ad136c9b60f065aaa5b4cb039b995e55f99efcd33d22df83f83cc`; candidate object SHA-256: `a917e26437c868f1b8b77b5b7a6430a684593eb66a22773920d01e4413d33fea`.

- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
