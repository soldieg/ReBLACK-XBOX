# sub_0027FA9A

- Function task: [#6331](https://github.com/soldieg/ReBLACK-XBOX/issues/6331).
- Batch: 60 of 100 (100-function lot).
- Dashboard candidate category before this PR: unmatched; fuzzy similarity 0.00% (not ObjDiff).
- Ghidra 12.1.3 body: 0x0027FA9A-0x0027FB5D inclusive, contiguous, 196 bytes.
- Static Ghidra references: 4 incoming direct call references, 2 resolved direct callees, 0 unresolved direct calls, 2 unresolved computed/indirect call sites. These are not runtime observations.
- Relationship group: independent-no-unowned-reference; members: SUB_0027FA9A. Ownerless inbound data-reference sources for this function: none. ABI/callback meaning remains pending where applicable.
- Target candidate: `sub_0027FA9A`, 196 bytes from the named decompdev candidate object.
- Static bytes: Ghidra capture = section-mapped XBE raw = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (196/196 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`. All 100 objects compiled without reported warnings or errors.
- ObjDiff 3.8.2: 100.00% against the named candidate object; matched symbol size 196 bytes.
- Candidate/compiled relocations: 0/0.
- Source SHA-256: `a9eaf44d5dc9a4ddddc5eba76295b2d54ac835202be264bd77c57369852230a7`; candidate object SHA-256: `e484159457fdc5cb0a02bd4d56cd6cd3ee1316a0534fe4da06e860d8204d0af9`.

- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
