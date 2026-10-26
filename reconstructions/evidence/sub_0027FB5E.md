# sub_0027FB5E

- Function task: [#6332](https://github.com/soldieg/ReBLACK-XBOX/issues/6332).
- Batch: 60 of 100 (100-function lot).
- Dashboard candidate category before this PR: unmatched; fuzzy similarity 0.00% (not ObjDiff).
- Ghidra 12.1.3 body: 0x0027FB5E-0x0027FB7F inclusive, contiguous, 34 bytes.
- Static Ghidra references: 3 incoming direct call references, 0 resolved direct callees, 0 unresolved direct calls, 1 unresolved computed/indirect call sites. These are not runtime observations.
- Relationship group: closed-call-component; members: SUB_0027FB5E, SUB_00280052, SUB_00280243, SUB_00280352, SUB_00280599. Ownerless inbound data-reference sources for this function: none. ABI/callback meaning remains pending where applicable.
- Target candidate: `sub_0027FB5E`, 34 bytes from the named decompdev candidate object.
- Static bytes: Ghidra capture = section-mapped XBE raw = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (34/34 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`. All 100 objects compiled without reported warnings or errors.
- ObjDiff 3.8.2: 100.00% against the named candidate object; matched symbol size 34 bytes.
- Candidate/compiled relocations: 0/0.
- Source SHA-256: `83205170916293c74639a2dffc853824bbd9eb78a2e9d19482d4e0f6c2e14006`; candidate object SHA-256: `e98baa9b2f3c95c7acccd18e5e73336d2cf28ea5f11569fbeafefdd63659e546`.

- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
