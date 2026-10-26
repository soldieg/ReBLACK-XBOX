# sub_0027FDB3

- Function task: [#6334](https://github.com/soldieg/ReBLACK-XBOX/issues/6334).
- Batch: 60 of 100 (100-function lot).
- Dashboard candidate category before this PR: unmatched; fuzzy similarity 0.00% (not ObjDiff).
- Ghidra 12.1.3 body: 0x0027FDB3-0x0027FE61 inclusive, contiguous, 175 bytes.
- Static Ghidra references: 2 incoming direct call references, 2 resolved direct callees, 0 unresolved direct calls, 2 unresolved computed/indirect call sites. These are not runtime observations.
- Relationship group: closed-call-component; members: SUB_0027FD61, SUB_0027FDB3. Ownerless inbound data-reference sources for this function: none. ABI/callback meaning remains pending where applicable.
- Target candidate: `sub_0027FDB3`, 175 bytes from the named decompdev candidate object.
- Static bytes: Ghidra capture = section-mapped XBE raw = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (175/175 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`. All 100 objects compiled without reported warnings or errors.
- ObjDiff 3.8.2: 100.00% against the named candidate object; matched symbol size 175 bytes.
- Candidate/compiled relocations: 0/0.
- Source SHA-256: `d505fc79172db38ca48e5eb39617f75ed157405a539a8151b15b9f683e430016`; candidate object SHA-256: `b13209cc706b1e6d816b49df530a7336dd33d8a99aaf7d2635cf876a903d0b88`.

- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
