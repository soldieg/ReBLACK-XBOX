# sub_0027F8EB

- Function task: [#6330](https://github.com/soldieg/ReBLACK-XBOX/issues/6330).
- Batch: 60 of 100 (100-function lot).
- Dashboard candidate category before this PR: unmatched; fuzzy similarity 0.00% (not ObjDiff).
- Ghidra 12.1.3 body: 0x0027F8EB-0x0027F93D inclusive, contiguous, 83 bytes.
- Static Ghidra references: 1 incoming direct call references, 2 resolved direct callees, 0 unresolved direct calls, 2 unresolved computed/indirect call sites. These are not runtime observations.
- Relationship group: independent-no-unowned-reference; members: SUB_0027F8EB. Ownerless inbound data-reference sources for this function: none. ABI/callback meaning remains pending where applicable.
- Target candidate: `sub_0027F8EB`, 83 bytes from the named decompdev candidate object.
- Static bytes: Ghidra capture = section-mapped XBE raw = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (83/83 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`. All 100 objects compiled without reported warnings or errors.
- ObjDiff 3.8.2: 100.00% against the named candidate object; matched symbol size 83 bytes.
- Candidate/compiled relocations: 0/0.
- Source SHA-256: `e06edce1a12cb10c72d74ad1e23434f7230bfdcdb92783b8bc5ebbd3eea310e7`; candidate object SHA-256: `e5166bd3d7e3ee5f9cb5a5d1891748d800900739a468a248b322b6f3e13c15e9`.

- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
