# sub_0020CFC0

- Function task: [#6260](https://github.com/soldieg/ReBLACK-XBOX/issues/6260).
- Batch: 60 of 100 (100-function lot).
- Dashboard candidate category before this PR: unmatched; fuzzy similarity 0.00% (not ObjDiff).
- Ghidra 12.1.3 body: 0x0020CFC0-0x0020D1F1 inclusive, contiguous, 562 bytes.
- Static Ghidra references: 0 incoming direct call references, 20 resolved direct callees, 0 unresolved direct calls, 14 unresolved computed/indirect call sites. These are not runtime observations.
- Relationship group: data-table-group; members: SUB_001FF850, SUB_0020B770, SUB_0020C630, SUB_0020CFC0, SUB_0020E7D0, SUB_0020EA20, SUB_0020ECF0, SUB_0020F280. Ownerless inbound data-reference sources for this function: 0x00295320. ABI/callback meaning remains pending where applicable.
- Target candidate: `sub_0020CFC0`, 562 bytes from the named decompdev candidate object.
- Static bytes: Ghidra capture = section-mapped XBE raw = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (562/562 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`. All 100 objects compiled without reported warnings or errors.
- ObjDiff 3.8.2: 100.00% against the named candidate object; matched symbol size 562 bytes.
- Candidate/compiled relocations: 0/0.
- Source SHA-256: `933ccf3e618a2be2ce370d394d217190708f5e51ee3f6ca269a9f1fe1aeea1c1`; candidate object SHA-256: `09bfa99c55c5f2e5a1d60e3fb32c3203830aa2cc9e69506e1285a86ef61fd919`.

- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
