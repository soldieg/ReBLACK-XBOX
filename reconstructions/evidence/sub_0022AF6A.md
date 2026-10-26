# sub_0022AF6A

- Function task: [#6309](https://github.com/soldieg/ReBLACK-XBOX/issues/6309).
- Batch: 60 of 100 (100-function lot).
- Dashboard candidate category before this PR: unmatched; fuzzy similarity 0.00% (not ObjDiff).
- Ghidra 12.1.3 body: 0x0022AF6A-0x0022B001 inclusive, contiguous, 152 bytes.
- Static Ghidra references: 1 incoming direct call references, 1 resolved direct callees, 0 unresolved direct calls, 1 unresolved computed/indirect call sites. These are not runtime observations.
- Relationship group: independent-no-unowned-reference; members: SUB_0022AF6A. Ownerless inbound data-reference sources for this function: none. ABI/callback meaning remains pending where applicable.
- Target candidate: `sub_0022AF6A`, 152 bytes from the named decompdev candidate object.
- Static bytes: Ghidra capture = section-mapped XBE raw = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (152/152 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`. All 100 objects compiled without reported warnings or errors.
- ObjDiff 3.8.2: 100.00% against the named candidate object; matched symbol size 152 bytes.
- Candidate/compiled relocations: 0/0.
- Source SHA-256: `5f962050f8d81d323d1a0519237c70cc8bf972c09567d0c45e904ef7ea832cea`; candidate object SHA-256: `b0a3de117592e2e98ffa45c74aab290a1450557a98c9bd0bfda5d763c74b7060`.

- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
