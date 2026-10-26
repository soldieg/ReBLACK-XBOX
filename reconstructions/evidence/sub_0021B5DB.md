# sub_0021B5DB

- Function task: [#6275](https://github.com/soldieg/ReBLACK-XBOX/issues/6275).
- Batch: 60 of 100 (100-function lot).
- Dashboard candidate category before this PR: unmatched; fuzzy similarity 0.00% (not ObjDiff).
- Ghidra 12.1.3 body: 0x0021B5DB-0x0021B5F2 inclusive, contiguous, 24 bytes.
- Static Ghidra references: 3 incoming direct call references, 0 resolved direct callees, 0 unresolved direct calls, 1 unresolved computed/indirect call sites. These are not runtime observations.
- Relationship group: closed-call-component; members: SUB_0021B594, SUB_0021B5DB, SUB_00221615, SUB_00221770. Ownerless inbound data-reference sources for this function: none. ABI/callback meaning remains pending where applicable.
- Target candidate: `sub_0021B5DB`, 24 bytes from the named decompdev candidate object.
- Static bytes: Ghidra capture = section-mapped XBE raw = derived PE = XboxRecomp split = candidate `.text$mn` = compiled `.text$mn` (24/24 bytes).
- Compiler: MSVC 19.51.36260 x86; `/nologo /W4 /TC /c /O2 /GS- /Zl /Gd /Gy`. All 100 objects compiled without reported warnings or errors.
- ObjDiff 3.8.2: 100.00% against the named candidate object; matched symbol size 24 bytes.
- Candidate/compiled relocations: 0/0.
- Source SHA-256: `2f31f51870697ecb44fa5ae606776744f3964b9d7e5e3be3909f29677a3588bd`; candidate object SHA-256: `b7f3718162d75e48bd81281a80ee3f68167eec7c8f0fff86d303ec46436bd1db`.

- Source is an address-pinned byte emitter. Semantic C and formal ABI are not claimed. Xbox link, post-link XBE diff, and runtime are pending.
