# sub_0021CDC6

- Function task: [#6281](https://github.com/soldieg/ReBLACK-XBOX/issues/6281).
- Batch: 60 of 100 (100-function lot).
- Dashboard candidate category before this PR: unmatched; fuzzy similarity 0.00% (not ObjDiff).
- Ghidra 12.1.3 body: 0x0021CDC6-0x0021CE07 inclusive, contiguous, 66 bytes.
- Static Ghidra references: 1 incoming direct call references, 1 resolved direct callees, 0 unresolved direct calls, 1 unresolved computed/indirect call sites. These are not runtime observations.
- Relationship group: closed-call-component; members: SUB_0021C592, SUB_0021C5F5, SUB_0021CDC6, SUB_0021CE62, SUB_0021D04E. Ownerless inbound data-reference sources for this function: none. ABI/callback meaning remains pending where applicable.
- Target candidate: `sub_0021CDC6`, 66 bytes from the named decompdev candidate object.
- Static bytes: Ghidra capture = section-mapped XBE raw = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (66/66 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`. All 100 objects compiled without reported warnings or errors.
- ObjDiff 3.8.2: 100.00% against the named candidate object; matched symbol size 66 bytes.
- Candidate/compiled relocations: 0/0.
- Source SHA-256: `fcbbd88acb02943c6dc383d5cb1ab5c824a107352a9d20012939cae519e98f11`; candidate object SHA-256: `5e3bd5f071184ede2fe5d031361e4f7b33597d4a10812573818c904ab9536316`.

- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
