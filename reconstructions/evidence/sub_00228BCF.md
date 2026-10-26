# sub_00228BCF

- Function task: [#6303](https://github.com/soldieg/ReBLACK-XBOX/issues/6303).
- Batch: 60 of 100 (100-function lot).
- Dashboard candidate category before this PR: unmatched; fuzzy similarity 0.00% (not ObjDiff).
- Ghidra 12.1.3 body: 0x00228BCF-0x00228D66 inclusive, contiguous, 408 bytes.
- Static Ghidra references: 1 incoming direct call references, 3 resolved direct callees, 0 unresolved direct calls, 1 unresolved computed/indirect call sites. These are not runtime observations.
- Relationship group: closed-call-component; members: SUB_00228BCF, SUB_0022B380. Ownerless inbound data-reference sources for this function: none. ABI/callback meaning remains pending where applicable.
- Target candidate: `sub_00228BCF`, 408 bytes from the named decompdev candidate object.
- Static bytes: Ghidra capture = section-mapped XBE raw = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (408/408 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`. All 100 objects compiled without reported warnings or errors.
- ObjDiff 3.8.2: 100.00% against the named candidate object; matched symbol size 408 bytes.
- Candidate/compiled relocations: 0/0.
- Source SHA-256: `74dbca2d6e4fad43a2138e0fc2673f8167c48e73ca3fb1d2e5daae886bcec085`; candidate object SHA-256: `accd52ed3e6f2cad4c6a84e7a099a284f25f43e0ee090eb05815a1bbb75971d3`.

- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
