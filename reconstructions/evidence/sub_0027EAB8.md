# sub_0027EAB8

- Function task: [#6328](https://github.com/soldieg/ReBLACK-XBOX/issues/6328).
- Batch: 60 of 100 (100-function lot).
- Dashboard candidate category before this PR: unmatched; fuzzy similarity 0.00% (not ObjDiff).
- Ghidra 12.1.3 body: 0x0027EAB8-0x0027EBAB inclusive, contiguous, 244 bytes.
- Static Ghidra references: 0 incoming direct call references, 6 resolved direct callees, 0 unresolved direct calls, 1 unresolved computed/indirect call sites. These are not runtime observations.
- Relationship group: independent-no-unowned-reference; members: SUB_0027EAB8. Ownerless inbound data-reference sources for this function: none. ABI/callback meaning remains pending where applicable.
- Target candidate: `sub_0027EAB8`, 244 bytes from the named decompdev candidate object.
- Static bytes: Ghidra capture = section-mapped XBE raw = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (244/244 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`. All 100 objects compiled without reported warnings or errors.
- ObjDiff 3.8.2: 100.00% against the named candidate object; matched symbol size 244 bytes.
- Candidate/compiled relocations: 0/0.
- Source SHA-256: `1458336ffeb7928ada62d2355d9bb65d0d6e654e03405d25bbc593cf444a0a81`; candidate object SHA-256: `102c603f27ded272b021a67e0acbeee09fe9876beade3387b79d9833d8279fb9`.

- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
